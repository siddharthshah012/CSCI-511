from Media import Media
from SearchEngine import SearchEngine
def main():
    processCommand()

def processCommand():
    print("Enter the option you want to search by")
    print("1.Title")
    print("2.Number")
    print("3.Subjects")
    print("4.Other")
    inp = input()
    search_result = []
    if (inp == "Title"):
        input_title =  input("Enter the title to be searched")
        se = SearchEngine()
        search_result = se.search_by_title(input_title)
        display_main(search_result)
    elif (inp == "Number"):
        input_number = input("Enter the number to be searched ")
        se = SearchEngine()
        search_result = se.search_by_call_number(input_number)
        display_main(search_result)
    elif (inp == "Subjects"):
        input_subjects = input ("Enter the subject to be searched")
        se = SearchEngine()
        search_result = se.search_by_subjects(input_subjects)
        display_main(search_result)
    elif (inp == "Other"):
        input_other= input("Enter the data to be searched ")
        se = SearchEngine()
        search_result = se.search_by_other(input_other)
        display_main(search_result)
    yesno = input ("Do you wish to continue? Yes or No")

    if (yesno == "Yes"):
        processCommand()
    elif(yesno == "No"):
        exit

def display_main(search_results):
    l = len(search_results)
    for i in range (l):
        search_results[i].display();
        temp= i+1
        print("Size::", temp)

main()
