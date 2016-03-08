from Media import Media
class Books(Media): 
    def __init__(self,call_number1,title1,subjects1,author1,description1, publisher1,city1,year1,series1,notes1):
        super(Books, self).__init__(call_number1,title1,subjects1, notes1)
        self.author= author1;
        self.description=description1;
        self.publisher = publisher1;
        self.city = city1;
        self.year  = year1;
        self.series = series1;
    def display(self):
        print("Results")
        print("BOOK")
        super(Books,self).display()
        print(self.author)
        print(self.description)
        print(self.publisher)
        print(self.city)
        print(self.year)
        print(self.series)
    def compare_other(self,string_other):
        if (self.notes.find(string_other) != -1 or self.description.find(string_other) != -1 or self.year.find(string_other) != -1):
            return True
        return False
        
    



        
