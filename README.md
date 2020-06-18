# Cheeni-Labs-Problem-Statement
The objective of this problem is that given a set of TV channels as an input by the user, the algorithm will have to provide the user information regarding which are the DTH providers/operators that provide the selected channel pack. The user selects the required channels based on the channel ID.

Sample Input/Output:
-------------------------------------------------------------------------------------------------------------------------   
Case 1: 
-------------------------------------------------------------------------------------------------------------------------   
Every selected channel has 1 or more DTH Operator providing all the channels
-------------------------------------------------------------------------------------------------------------------------   

 0 : Sun Music                                                                                                                                  
 1 : Sun TV                                                                                                                                     
 2 : Star Sports                                                                                                                                
 3 : HBO                                                                                                                                        
 4 : Sun News                                                                                                                                   
 5 : Republic TV                                                                                                                                
 6 : CNBC TV18                                                                                                                                  
 7 : Cartoon Network                                                                                                                            
 8 : Romedy Now                                                                                                                                 
 9 : Pogo                                                                                                                                       
 10: Channel V                                                                                                                                  
 11: Set Max                                                                                                                                    
 12: Colors HD                                                                                                                                  
 13: Sony Pix                                                                                                                                   
 14: Maa TV                                                                                                                                     
 15: Gemini TV                                                                                                                                  
 16: Maa Music                                                                                                                                  
 17: DD Podhigai                                                                                                                                
 18: Animal Planet                                                                                                                              
 19: TLC                                                                                                                                        
 20: MTV                                                                                                                                        
 21: Nickelodeon                                                                                                                                
 22: Surya TV                                                                                                                                   
 23: Comedy Central                                                                                                                             
 24: Star World                                                                                                                                 
 25: NDTV 24/7                                                                                                                                  
 26: NDTV Profit                                                                                                                                
 27: DD Malayalam                                                                                                                               
 28: Fox News                                                                                                                                   
 29: Puthiya Thalaimurai                                                                                                                        
 Enter required channel IDs associated with the channel                                                                                         
 Example press type 0 if you want Sun Music                                                                                                     
 (Press 31 to stop)         
 
 8                                                                                                                                               
0                                                                                                                                               
3                                                                                                                                               
15                                                                                                                                              
16                                                                                                                                              
21                                                                                                                                              
2                                                                                                                                               
28                                                                                                                                              
31                                                                                                                                              
Thank you for choosing the channels                                                                                                             
8 0 3 15 16 21 2 28                                                                                                                             
(.)Airtel (.)Tata Sky Is/Are the DTH available with the selected channel(s) like :-                                                             
* Romedy Now                                                                                                                                    
* Sun Music                                                                                                                                     
* HBO                                                                                                                                           
* Gemini TV                                                                                                                                     
* Maa Music                                                                                                                                     
* Nickelodeon                                                                                                                                   
* Star Sports                                                                                                                                   
* Fox News                                                                                                                                      
-------------------------------------------------------------------------------------------------------------------------    

Case 2:
-------------------------------------------------------------------------------------------------------------------------   
All the selected list of channels are not provided by a single DTH Operator
-------------------------------------------------------------------------------------------------------------------------   

0 : Sun Music 
1 : Sun TV 
2 : Star Sports                                                                                  
3 : HBO                                                                                                            
4 : Sun News                                                                                                        
5 : Republic TV                                                                                                       
6 : CNBC TV18                                                                                                        
7 : Cartoon Network      
8 : Romedy Now                                                                                                         
9 : Pogo                                                                                                      
10: Channel V                                                                                                         
11: Set Max                                                                                                          
12: Colors HD                                                                                                         
13: Sony Pix                                                                                                     
14: Maa TV                                                                                               
15: Gemini TV                                                                                              
16: Maa Music                                                                                            
17: DD Podhigai                                                                                                   
18: Animal Planet                                                                                                
19: TLC                                                                                                  
20: MTV                                                                                               
21: Nickelodeon                                                                                                 
22: Surya TV                                                                                                   
23: Comedy Central                                                                                             
24: Star World                                                                                             
25: NDTV 24/7                                                                                           
26: NDTV Profit                                                                                        
27: DD Malayalam                                                                                                      
28: Fox News                                                                                                   
29: Puthiya Thalaimurai  
Enter required channel IDs associated with the channel                                                                
Example press type 0 if you want Sun Music                                                                         
(Press 31 to stop)                                                                                               
8 0 3 21 2 27 25 15 16                                                                                            
31       
Thank you for choosing the channels                                                                                  
8 0 3 21 2 27 25 15 16                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
(.)Tata Sky Is/Are the DTH available with the selected channel(s) like :-                                        
* Romedy Now                                                                                              
* Sun Music                                                                                             
* HBO                                                                                                    
* Nickelodeon                                                                                            
* Star Sports                                                                                           
* DD Malayalam                                                                                          
* Gemini TV                                                                                                 
* Maa Music                                                                                                           
-------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                                                              
(.)Airtel Is/Are the DTH available with the selected channel(s) like :-                                            
* Romedy Now                                                                                                       
* Sun Music                                                                                                      
* HBO                                                                                                           
* Nickelodeon                                                                                                 
* Star Sports                                                                                                
* NDTV 24/7                                                                                                            
* Gemini TV                                                                                                          
* Maa Music                                                                                                         
-------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                                                                                                                                                                                      
(.)Sun Direct Is/Are the DTH available with the selected channel(s) like :-                                           
* Romedy Now                                                                                                          
* Sun Music                                                                                                           
* HBO                                                                                                                 
* Star Sports                                                                                                        
* DD Malayalam                                                                                                       
* NDTV 24/7                                                                                                         
* Gemini TV                                                                                                           
* Maa Music                                                                                                          
-------------------------------------------------------------------------------------------------------------------------  
