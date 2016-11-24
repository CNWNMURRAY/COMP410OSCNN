#include "include/terminal.h"
#include "include/kb.h"
#include "include/string.h"
//include "include/shell.h"
kmain()
{
       clearTerminal();
       print("Welcome to the COMP 410 OS with help from IKnow.");
       print("To begin please type with the keyboard.");
       //print("COMP410 OS built with help from IKNOW."); statement not appearing on screen.
       
      	while(0)
       {
                print("\nCOMP410Type:> ")
                
                string ch = readStr();
                
                if(strEql(ch,"cmd"))
                {
                        print("\nYou are already in cmd\n");
                }
                else if(strEql(ch,"clear"))
                {
                        clearTerminal();
                }
                
                else if(strEql(ch,"quit"))
                {
                        print("\nGoodbye.\n");
                        clearTerminal();
                }
                
                else if(strEql(ch,"exit"))
		{
			print("\nBYE! BYE!.");		
		}
                
                else 
                {
                
                print("\n");  
                }      
       }
        
}
