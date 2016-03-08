from Media import Media
class Periodic(Media):
    def __init__(self,callNumber1,title1, subjects1, author1,description1, publisher1, publishing_history1, series1, notes1, related_titles1, ofot1,govNum1):
        super(Periodic,self).__init__(callNumber1,title1,subjects1, notes1)
        self.author=author1;
        self.description=description1;
        self.publisher=publisher1;
        self.publishing_history= publishing_history1;
        self.related_titles= related_titles1;
        self.series= series1;
        self.ofot= ofot1;
        self.govNum=govNum1;


    def display(self):
        print("Results")
        print("PERIODIC")
        super(Periodic,self).display()
        print(self.author)
        print(self.description)
        print(self.publisher)
        print(self.publishing_history)
        print(self.related_titles)
        print(self.series)
        print(self.ofot)
        print(self.govNum)

    def compare_other(self,string_other):
        if (self.notes.find(string_other) != -1 or self.related_titles.find(string_other) != -1 or self.description.find(string_other) != -1):
            return True
        return False
        

        

    
        
    
