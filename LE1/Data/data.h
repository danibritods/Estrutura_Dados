#include <stdio.h>
#include <stdlib.h>

//pensando melhor eu gostaria que o Insert_string retornace a função Insert_separado

int atoi(const char* str){
    int num = 0;
    int i = 0;
    int isNegetive = 0;
    if(str[i] == '-'){
        isNegetive = 1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9')){
        num = num * 10 + (str[i] - '0');
        i++;
    }
    if(isNegetive) num = -1 * num;
    return num;
}

struct Data{
	int dia;
	int mes;
	int ano;
	char string[11];
};

typedef struct Data Data;

Data* Init(){
	Data *data = malloc(sizeof(Data));
	return data;
}

int Validada(int dia, int mes, int ano){
		if (!(0<mes && mes<13) || dia < 1 || dia > 31 ||
		(dia > 30 && (mes == 4 || mes == 6 || mes == 9 || mes==11) ) ||
		((mes == 2 && dia > 28) && !(((ano%4 == 0) && (ano%100 !=0) ) || (ano%400 == 0))) )
		{
			return 0;
		}
		else{
			return 1;
		};
};

Data* Insert_separado(int dia, int mes, int ano){
	Data *data = malloc(sizeof(Data));
	if( Validada(dia,mes,ano)){
		
		data->dia = dia;
		data->mes = mes;
		data->ano = ano;

		sprintf(data->string,"%02d/%02d/%02d",dia,mes,ano);

		return data;
	}
	else{
		printf("Data inválida\n");
		data->dia = 0;
		data->mes = 0;
		data->ano = 0;

		return data;
	};
};


Data* Soma_Dias(Data *data, int dias){
	//falta ainda alguma modificação pra aceitar negativo, talvez tenha que mudar a lógica
	int dia = data->dia;
	int mes = data->mes;
	int ano = data->ano;

	for(int i = 1; i <= dias; i++){
		dia = dia + dias/dias;
		if(!Validada(dia,mes,ano)){
			dia=1;
			mes = mes + dias/dias;
			if (!Validada(dia,mes,ano))
			{
			mes=1;
			ano = ano + dias/dias;	
			};
		};
		
	};	
	data->dia = dia;
	data->mes = mes;
	data->ano = ano;
	sprintf(data->string,"%02d/%02d/%02d",dia,mes,ano);

};

void Insert_string(Data *data, char data_str[11]){
	char dia_str[3] = {data_str[0],data_str[1],'\0'};
	char mes_str[3] = {data_str[3],data_str[4],'\0'};
	char ano_str[5] = {data_str[6],data_str[7],data_str[8],data_str[9],'\0'};
		
	int dia = atoi(dia_str);
	int mes = atoi(mes_str);
	int ano = atoi(ano_str);

	if (Validada(dia,mes,ano))
	{
		data->dia = dia;
		data->mes = mes;
		data->ano = ano;

		sprintf(data->string,"%02d/%02d/%02d",dia,mes,ano);
	}else{
		printf("Data Inválida :(\n");
		data->dia = 0;
		data->mes = 0;
		data->ano = 0;


	};	
};

//void JUNK()
/*
	
			for(int i=0; i<10; i++){
		(i<2)? dia_str[i] = data_str[i]:0;
		()
		(2<i && i<4)? mes_str[i-3] = data_str[i]:0;
		
		if (i<2){
			dia_str[i] = data_str[i];
		}else{
			dia_str[i] = '\0'; 
			if(2< i && i < 4){
				mes_str[i-3] = data_str[i];
			}else{
				if(5<i){
					ano_str[i-6] = data_str[i];
				};
			};
		};

*/
