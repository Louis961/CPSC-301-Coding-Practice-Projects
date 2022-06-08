#include <iomanip>
#include <iostream>

int main() {
  unsigned int num_student;
  std::cout << "Enter number of students: ";
  std::cin >> num_student;
  std::cin.ignore();

  // Create an array of student objects named stud_arr. The size of the array should
  // be the number of students based on user input

  for (int i = 0; i < num_student; i++) {
    Student curr_student;
    std::string name, cmajor;
    unsigned int cwid;
    double gpa;

    std::cout << "\nEnter student " << i + 1 << " name: ";
    std::getline(std::cin, name);
    // Assign the name of the student object curr_student to the user's name input

    std::cout << "Enter student " << i + 1 << " major: ";
    getline(std::cin, cmajor);
    // Assign the cmajor of the student object curr_student to the user's major input

    std::cout << "Enter student " << i + 1 << " cwid: ";
    std::cin >> cwid;
    // Assign the cwid of the student object curr_student to the user's cwid input

    std::cout << "Enter student " << i + 1 << " gpa: ";
    std::cin >> gpa;
    // Assign the gpa of the student object curr_student to the user's gpa input

    std::cin.ignore();

    // Store the student object curr_student in the student array named stud_arr. Use the
    // appropriate index so that the object is placed at the end of the list
  }

  double average;
  // Compute the average gpa by using the average_gpa function and storing it in the
  // variable called average

  std::cout << "\nThe average gpa of " << num_student << " student(s) is "
            << std::fixed << std::setprecision(2) << average << std::endl;
  return 0;
}
