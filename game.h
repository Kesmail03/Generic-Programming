#pragma once
#include<iostream>
#include<string>
#include<cstring>
#include<array>
#include<list>

using std::string;
using std::list;
using std::array;
using std::ostream;
using std::istream;



class activity
{
	public:
		activity();
		~activity();
		activity(const activity & to_copy);
		int compare(const char * to_compare);

		activity & operator=(const activity & src);
		friend ostream & operator<<(ostream & output, const activity & to_display);
		friend istream & operator>>(istream & input, activity &);
		
		friend bool operator==(const activity & op1, const char * name);
		friend bool operator==(const char * name, const activity & op2);
		
		friend bool operator!=(const activity & op1, const char * name);
		friend bool operator!=(const char * name, const activity & op2);

		friend bool operator <(const char * name, const activity & op2);
		friend bool operator <(const activity & op1, const char * name);
		friend bool operator <(const activity & op1, const activity & op2);
		
		friend bool operator <=(const char * name, const activity & op2);
		friend bool operator <=(const activity & op1, const char * name);
		friend bool operator <=(const activity & op1, const activity & op2);
		
		friend bool operator >(const char * name, const activity & op2);
		friend bool operator >(const activity & op1, const char * name);
		friend bool operator >(const activity & op1, const activity & op2);
		
		friend bool operator >=(const char * name, const activity & op2);
		friend bool operator >=(const activity & op1, const char * name);
		friend bool operator >=(const activity & op1, const activity & op2);
	protected:
		char * name;
		int count;//number of activities

};



class tour: public activity
{
	public:
		tour();
		
		friend ostream & operator<<(ostream & output, const tour & to_display);
		friend istream & operator>>(istream & input, tour &);
		
	protected:
		string location;
		int time;

};



class game: public activity 
{
	public:
		game();
		~game();
		game(const game & to_copy);
		game & operator=(const game & src);
		int display() const;
		friend ostream & operator<<(ostream & output, const game & to_display);
		friend istream & operator>>(istream & input, game &);
		
		friend bool operator==(const game & op1, const char * game_name);
		friend bool operator==(const char * game_name, const game & op2);
		
		friend bool operator!=(const game & op1, const char * game_name);
		friend bool operator!=(const char * name, const game & op2);
		
		friend bool operator <(const char * game_name, const game & op2);
		friend bool operator <(const game & op1, const char * game_name);
		friend bool operator <(const game & op1, const game & op2);
		
		friend bool operator <=(const char * game_name, const game & op2);
		friend bool operator <=(const game & op1, const char * game_name);
		friend bool operator <=(const game & op1, const game & op2);
		
		friend bool operator >(const char * game_name, const game & op2);
		friend bool operator >(const game & op1, const char * game_name);
		friend bool operator >(const game & op1, const game & op2);
		
		friend bool operator >=(const char * game_name, const game & op2);
		friend bool operator >=(const game & op1, const char * game_name);
		friend bool operator >=(const game & op1, const game & op2);
	protected:
		char * game_name;
		

};




class beach: public activity
{
	public:
		beach();
		friend ostream & operator<<(ostream & output, const beach & to_display);
		friend istream & operator>>(istream & input, beach &);
		
	protected:
		string beach_name;

};


