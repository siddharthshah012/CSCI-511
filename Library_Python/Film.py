from Media import Media
class Film(Media):
    def __init__(self,callnumber1,title1,subjects1,year1,director1,notes1):
        super(Film,self).__init__(callnumber1,title1,subjects1,notes1)
        self.year=year1
        self.director=director1
    def display(self):
        print("Results")
        print("FILM")
        super(Film,self).display()
        print(self.year)
        print(self.director)
    def compare_other(self,string_other):
        if (self.notes.find(string_other) != -1 or self.director.find (string_other) != -1 or self.year.find(string_other) != -1):
            return True
        return False
