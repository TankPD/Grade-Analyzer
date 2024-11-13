#include <iostream>
#include <vector>
#include <iomanip>

void userInput(std::vector<int> &userGrades);
double average(std::vector<int> const &grades);
void display(std::vector<int> const &grades);

int main()
{
    std::vector<int> grades(5);
    userInput(grades);
    display(grades);
    return 0;
}

void userInput(std::vector<int> &userGrades)
{
    std::cout << "Enter 5 grades between 1 and 100\n";
    for (int i = 0; i < userGrades.size(); i++)
    {
        std::cout << "Enter grade " << (i + 1) << ": ";
        std::cin >> userGrades[i];
    }
}

double average(std::vector<int> const &grades)
{
    int sum = 0;
    for (int i = 0; i < grades.size(); i++)
    {
        sum += grades[i];
    }
    double avg = static_cast<double>(sum) / grades.size();
    return avg;
}

void display(std::vector<int> const &grades)
{
    char letterGrade;
    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countD = 0;
    int countF = 0;

    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] >= 90 && grades[i] <= 100)
        {
            letterGrade = 'A';
            countA++;
        }
        else if (grades[i] >= 80 && grades[i] <= 89)
        {
            letterGrade = 'B';
            countB++;
        }
        else if (grades[i] >= 70 && grades[i] <= 79)
        {
            letterGrade = 'C';
            countC++;
        }
        else if (grades[i] >= 60 && grades[i] <= 69)
        {
            letterGrade = 'D';
            countD++;
        }
        else if (grades[i] < 60)
        {
            letterGrade = 'F';
            countF++;
        }
        std::cout << "\n\nGrade in numerical value: " << grades[i] << std::endl
                  << "Grade in alphabetical letters: " << letterGrade;
    }
    std::cout << "\n\nThe average grade is: " << std::fixed << std::setprecision(2) << average(grades) << std::endl;
    std::cout << "\nGrade Distribution: \n"
              << "A: " << countA << "\nB: " << countB << "\nC: " << countC << "\nD: " << countD << "\nF: " << countF;
}



    
