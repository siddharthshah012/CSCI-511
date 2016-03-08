from Media import Media
class Video(Media):
    def __init__(self,callNumber1,title1,subjects1,description1,distribution1,notes1,series1,label1):
        super(Video,self).__init__(callNumber1,title1,subjects1,notes1)
        self.description=description1
        self.distribution = distribution1
        self.series = series1;
        self.label = label1;

    def display(self):
        print("Results")
        print("VIDEO")
        super(Video,self).display()
        print(self.description)
        print(self.distribution)
        print(self.series)
        print(self.label)

    def compare_other(self,string_others):
        if (self.description.find(string_others) != -1 or self.notes.find(string_others) != -1 or self.description.find(string_others)!= -1):
            return True
        return False
        
