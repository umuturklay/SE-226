print("Enter your name")
name=input()
print("Your lab grade:")
labGrade=int(input())
print("Your midterm grade: ")
midtermGrade=int(input())
print("Your final grade: ")
finalGrade=int(input())

print("Name: "+name +
      "\nLab: "+str(labGrade)+
      "\nMidterm: "+str(midtermGrade)+
      "\nFinal: "+str(finalGrade)+
      "\nLast Score: "+ str((((labGrade*(25/100)))+(midtermGrade*(35/100))+(finalGrade*(40/100)))))