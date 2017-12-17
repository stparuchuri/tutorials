# -*- coding: utf-8 -*-
"""
Created on Thu Jul 13 00:24:33 2017
Class Tutorial: Describes class, regular methods, static methods,
class methods, class variables, derived class, etc.
@author: surya
"""
class Employee:
    company_name = 'umd'
    company_domain = company_name + '.edu'
    first_name = 'FirstName'
    last_name = 'LastName'
    e_id = 0
    email = first_name + last_name + company_domain
    
    def __init__(self,first_name,last_name,e_id):
        self.first_name = first_name
        self.last_name = last_name
        self.e_id = e_id
        self.email = self.first_name + self.last_name + '@' + self.company_domain
    
    def update_first_name(self,first_name_new):
        self.first_name = first_name_new
        return 0
    def update_last_name(self,last_name_new):
        self.last_name = last_name_new
        return 0
    @staticmethod
    def staticmethod1():
        pass
    @classmethod
    def update_company_name(cls,new_company_name):
        cls.company_name = new_company_name
        return 0
    
class Manager(Employee):
    team_name = 'Team'
    division = 'Division'
    reporting_director = 'Director'
    def __init__(self,first_name,last_name, e_id,team,division,director):
        super().__init__(first_name,last_name,e_id)
        # Employee.__init__(self, first_name,last_name,e_id) Alternative to
        # using super .__init__ call.
        self.team_name = team
        self.division = division
        self.reporting_director = director
        
    def update_team(self,team):
        self.team_name = team;
        return 0
    def update_division(self,division):
        self.division = division
        return 0
    def update_director(self,director):
        self.reporting_director = director
        return 0
    
def main():
#    employee1 = Employee('Surya','Pruchuri',1600);
#    print(employee1.__dict__)
#    manager1 = Manager('Surya','Paruchuri',1500,'DSP_Firmware_developer','QTI','Jermi')
#    print(manager1.__dict__)
#    emp1 = Employee('Mounika1','Paruchuri1',1400)
#    emp2 = Employee('Mounika2','Paruchuri2',1600)
#    emp3 = Employee('Mounika3','Paruchuri3',1700)
#    emp4 = Employee('Mounika4','Paruchuri4',1800)
#    print(emp1.__dict__,'\n',emp2.__dict__,'\n',emp3,'\n',emp4)  
    print("executing the main function of the class_tutorial.py file")
    return 0

if __name__ == '__main__':
    main()