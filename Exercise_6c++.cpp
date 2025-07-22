#include <iostream>
using namespace std;

	class basicInfo {
	protected:
	char name[30];
	int empId;
	char gender[6];
	public:
	void getBasicInfo(void)
	{
	cout << "Enter Name: ";
	cin>>name;
	cout << "Enter Emp. Id: ";
	cin >> empId;
	cout << "Enter Gender: ";
	cin >> gender;
	}
	};
	
	
	// Base Class - deptInfo
	class deptInfo {
	protected:
	char deptName[30];
	char assignedWork[30];
	int time2complete;
	public:
	void getDeptInfo(void)
	{
	cout << "Enter Department Name: ";
	cin>>deptName;
	cout << "Enter assigned work: ";
	cin>>assignedWork;
	cout << "Enter time in hours to complete work: ";
	cin >> time2complete;
	}
	};
	
	
	
	
	// final class (Derived Class)- employee
	class employee : private basicInfo, private deptInfo {
	public:
	void getEmployeeInfo(void)
	{
	cout << "Enter employee's basic info: " << endl;
	//call getBasicInfo() of class basicInfo
	getBasicInfo(); //calling of public member
	 
	cout << "****Enter employee's department info****" << endl;
	 
	getDeptInfo(); 
	 
	}
	
	
	void printEmployeeInfo(void)
	{
	cout << "Employee's Information is: " << endl;
	
	 
	
	cout << "Basic Information...:" << endl;
	cout << "Name: " << name << endl;  
	 
	cout << "Employee ID: " << empId << endl;
	 
	cout << "Gender: " << gender << endl<< endl;
	 
	cout << "Department Information...:" << endl;
	cout << "Department Name: " << deptName << endl;
	 
	cout << "Assigned Work: " << assignedWork << endl;  
	cout << "Time to complete work: " << time2complete << endl;  
	}
	};
	
	
	int main()
	{
	 
	employee emp;
	emp.getEmployeeInfo();
	emp.printEmployeeInfo();
	return 0;
	}
