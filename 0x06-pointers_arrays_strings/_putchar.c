#include "main.h"                                                                                                                  
#include <unistd.h>                                                                                                                     
                                                                                                                                        
/**                                                                                                                                     
 * _putchar - writes the char c into stdout                                                                                          
 * @c: The char to be printed                                                                                                           
 *                                                                                                                                      
 * Return: On success 1.                                                                                                                
 * On error, return -1, and errno is set correctly.                                                                            
 */                                                                                                                                     
int _putchar(char c)                                                                                                                    
{                                                                                                                                       
        return (write(1, &c, 1));                                                                                                       
}
