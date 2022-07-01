//This library contains the implementation of some basic recursive functions//
#include "Header.cpp"

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Function Name	| 	factorial
//	Prototype		|	int(int)
//	Description		|	It is used to calculate the factorial of given number.
//	Input			|	An integer 
//	Return value	| 	An integer			
//	Date			|   1st July 2022
//	Author 			|	Manthan Kallure	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
int factorial(int iNo)
{
	if(iNo  == 0)	return 1;
	
	int iAns = iNo * factorial(iNo-1);
	
	return iAns;
}

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Function Name	| 	Power
//	Prototype		|	int(int)
//	Description		|	It is used to power of 2.
//	Input			|	An integer 
//	Return value	| 	An integer			
//	Date			|   1st July 2022
//	Author 			|	Manthan Kallure	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
int power(int iNo)
{
	//base condition
	if(iNo  == 0)	return 1;
	
	//Recursive relation
	int iAns = 2 * power(iNo-1);
	
	return iAns;
}

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Function Name	| 	countD
//	Prototype		|	void(int)
//	Description		|	It is print the decreasing count of given number upto 1.
//	Input			|	An integer 
//	Return value	| 	void			
//	Date			|   2nd July 2022
//	Author 			|	Manthan Kallure	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
void countD(int iNo)
{
	if(iNo == 0) return ;
	
	cout<<iNo<<"\t";
	countD(iNo-1);
}

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Function Name	| 	countA
//	Prototype		|	void(int)
//	Description		|	It is print the incresing count of given number upto n.
//	Input			|	An integer 
//	Return value	| 	void			
//	Date			|   2nd July 2022
//	Author 			|	Manthan Kallure	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
void countA(int iNo)
{
	if(iNo == 0) return ;
	
	countA(iNo-1);
	
	cout<<iNo<<"\t";
}

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Function Name	| 	powerofNo
//	Prototype		|	int(int,int)
//	Description		|	It is used to calculate the power of given number to given exponent.
//	Input			|	An integer,integer 
//	Return value	| 	integer			
//	Date			|   2nd July 2022
//	Author 			|	Manthan Kallure	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
int powerofNo(int iNo,int ipow)
{
	if(iNo == 0 || ipow == 0) return 1;
	
	if(iNo == 2)		power(ipow);
	
	int iAns = iNo * powerofNo(iNo,ipow-1);
	
	return iAns;
}