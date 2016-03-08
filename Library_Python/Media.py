class Media:
    def __init__(self,call_number1,title1,subjects1,notes1):
        self.call_number=call_number1;
        self.title=title1;
        self.subjects=subjects1;
        self.notes=notes1;    
    def compare_title(self,string_title):
        if (self.title.find(string_title) != -1):
            return True
        return False
    def compare_call_number(self,string_callNumber):
        #print("inside call Number"+ string_callNumber)
        if (self.call_number.find(string_callNumber) != -1):
            return True
        return False
    def compare_subjects(self,string_subjects):
        if (self.subjects.find(string_subjects) != -1):
            return True
        return False
    def display(self):
        print (self.call_number)
        print(self.title)
        print (self.subjects)
        print(self.notes)
        
