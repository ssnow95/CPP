#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class phonebook
{
    private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
    public:
		phonebook(void);
		~phonebook(void);
		void		add_contact(int id);
		void		search_contact();
		 void		print_contact();
		void		exit_phonebook();
		int			check_contact();
		int 		id;
};

int             main(int argc, char **argv);

#endif