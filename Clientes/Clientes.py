class Date:
	def __init__(self,date_str):
		if(len(str(date_str)) == 10):
			self.day = date_str[:2]
			self.month = date_str[3:5]
			self.year = date_str[6:]
		else:
			self.day = 0
			self.month = 0
			self.year = 0 

class Client:
	num_clients = 0
	instances = []

	def __init__(self, name=0, address=0, phone=0,date_first_buy=0,date_last_buy=0):
	    Client.num_clients += 1
	    self.__class__.instances.append(self)	

	    self.id_ = Client.num_clients
	    self.name = name 
	    self.address = address
	    self.phone = phone
	    self.date_first_buy = Date(date_first_buy)
	    self.date_last_buy = Date(date_last_buy)
	    print("Cliente {} cadastrado".format(self.id_))

	@classmethod    
	def print_instances(cls):
		for instance in cls.instances:
			print(instance.id_,instance.name)

	@classmethod		
	def consulta(cls,id_):
		found = False
		for client in cls.instances:
			if client.id_ == id_:
				found = True
				print("Cliente {}:{} encontrado!".format(id_,client.name))


		if(not found):
			print("Cliente {} não encontrado".format(id_))

	@classmethod		
	def exclude(cls,id_):
		found = 0
		for i in range(len(cls.instances)):
			client = cls.instances[i]
			if client.id_ == id_:
				found = i
				print("Cliente",client.name,"excluido!")
	

		if(found == 0):
			print("Cliente não encontrado")
		else:
			del cls.instances[found]
		