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
	def __init__(self, id_=0, name=0, address=0, phone=0,date_first_buy=0,date_last_buy=0):
	    Client.num_clients += 1
	    self.id_ = id_
	    self.name = name 
	    self.address = address
	    self.phone = phone
	    self.date_first_buy = Date(date_first_buy)
	    self.date_last_buy = Date(date_last_buy)


class Clients:
	list = []
#	def __init__(self):
#		self.entries = []
	def new_entry(self, id_, name, address, phone, date_first_buy, date_last_buy):
		self.list.append(Client(id_, name, address, phone,date_first_buy,date_last_buy))



Clients.new_entry(1,"Daniel Brito","Guaxindiba","22992343274","12/11/1997","12/11/1997")
Clients.new_entry(2,'Daniel Santos','Campos','22992343274',"12/11/1997","12/11/1997")
Clients.new_entry(3,'Daniel Santos','Campos','22992343274',"12/11/1997","12/11/1997")



