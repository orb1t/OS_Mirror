#include "terminal.h"


extern void emptyString(char* str);
extern void terminal_initialize();

namespace enter_press_np
{
   struct enter_pressed_structure
   {
     int bit;
     char* value;
   };

   struct val_e
   {
     char* val_e;
     int index_val_e = 0;
   };

   extern struct val_e val_e_inst;
};


Terminal::Terminal()
{

}


void Terminal::recieve_input()
{


}


void Terminal::char_handler(char* val)
{
    #ifdef DEBUG_MODE
		printf("\t %s " , val);
	#endif
	//printf("%d" , Lib::str::strcmp(val,"help")==0);
	if(Lib::str::strcmp(val,"help")==0)
	{
			printf(" \n ----Help---- \n");
			printf("Commands : %founder% \n");
	}
	else if(Lib::str::strcmp(val,"%founder%")==0)
	{
		printf("\n Founder of BoneOS : Amanuel Bogale \n ");
	}
}
void Terminal::terminal_initalize()
{
		cls();
		char* val_now;

		printf(" ************     **********       **       * 	 ********		\n");
		printf(" *		  *     *	    *       * *      *      *				\n");
		printf(" *		  *     *	    *       *  *     *      *				\n");
		printf(" *	  	*     *	    *       *   *    *      *					\n");
		printf(" *   ********     *	    *       *    *   *      *****		    \n");
		printf(" *	  	*     *	    *       *     *  *      *					\n");
		printf(" *	  	*     *	    *       *      * *      *					\n");
		printf(" *	  	*     *	    *       *       **      *					\n");
		printf(" ************     **********       *        *      ******** 	\n");



		printf("BoneOS Non-Profit Organization \n");
		printf("For Help type in help, on the Boner \n");
	while(true)
	{		
		printf(" \n<\\User>");
		terminal_initialize();

//		check_color("Hello World" , 0xFF3);
		val_now = wait_enter();	

		this->char_handler(val_now);

		emptyString(enter_press_np::val_e_inst.val_e);
		enter_press_np::val_e_inst.index_val_e = 0;

	}

}


Terminal::~Terminal()
{

}
