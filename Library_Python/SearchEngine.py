from Media import Media
from Books import Books
from Film import Film
from Periodic import Periodic
from Video import Video
class SearchEngine:
    def __init__(self):
        self.cardCatalogue = []
        self.initialize_book()
        self.initialize_film()
        self.initialize_periodic()
        self.initialize_video()
    def initialize_book(self):
        with open("book.txt","r") as f:
            line = f.readline()
            while line!="":
                
                word = line.split("|")
                if (len(word)!= 10):
                    break
                bk = Books(word[0],word[1],word[2],word[3],word[4],word[5],word[6],word[7],word[8],word[9])
                self.cardCatalogue.append(bk)
                line = f.readline()

    def initialize_film(self):
        with open ("film.txt","r") as file_film:
            line = file_film.readline()
            while line!="":
                
                wordF = line.split("|")
                if (len(wordF )!= 6):
                    break
                fl = Film(wordF[0],wordF[1],wordF[2],wordF[3],wordF[4],wordF[5])
                self.cardCatalogue.append(fl)
                line= file_film.readline()
                
    def initialize_periodic(self):
        with open ("periodic.txt","r") as file_periodic:
            line = file_periodic.readline()
            while line!="":
                
                wordP = line.split("|")
                if(len(wordP)!= 12):
                    break
                pd = Periodic(wordP[0],wordP[1],wordP[2],wordP[3],wordP[4],wordP[5],wordP[6],wordP[7],wordP[8],wordP[9],wordP[10],wordP[11])
                self.cardCatalogue.append(pd)
                line = file_periodic.readline()
	
    def initialize_video(self):
        with open ("video.txt","r") as file_video:
            line = file_video.readline()
            while line!="":
               
                wordV = line.split("|")
                if (len(wordV)!=8):
                    break
                vd  = Video(wordV[0],wordV[1],wordV[2],wordV[3],wordV[4],wordV[5],wordV[6],wordV[7])
                self.cardCatalogue.append(vd)
                line = file_video.readline()
        
    def length(self):
        return len(self.cardCatalogue)
    def search_by_title(self,title):
        #search_byTitle= [];
        answer = False
        results = []
        sizeCC = self.length()
        for i in range (sizeCC):
            answer = self.cardCatalogue[i].compare_title(title)
            if (answer == True):
                results.append(self.cardCatalogue[i])
        return results;
    def search_by_call_number(self,callNumber):
        #search_callNumber= [];
        answer = False
        results= []
        sizeCC = self.length()
        for i in range (sizeCC):
            answer = self.cardCatalogue[i].compare_call_number(callNumber)
            #print (answer)
            if (answer == True):
                results.append(self.cardCatalogue[i])
        return results;
    def search_by_subjects (self, subjects):
        answer = False
        results = []
        sizeCC = self.length()
        for i in range (sizeCC):
            answer = self.cardCatalogue[i].compare_subjects(subjects)
            if (answer == True):
                results.append(self.cardCatalogue[i])
        return results;
    def search_by_other(self,other):
        answer = False
        results = []
        sizeCC = self.length();
        for i in range (sizeCC):
            answer = self.cardCatalogue[i].compare_other(other)
            if (answer == True):
                results.append(self.cardCatalogue[i])
        return results;
