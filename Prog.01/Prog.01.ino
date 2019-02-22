/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Display 7 segments | prog.01          **
**                                                                               **
**   NOM: Dennis Garcia                                       DATA: 18/02/2019   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int A = 5;        
const int B = 6;        
const int C = 7;         
const int D = 8;        
const int E = 9;          
const int F = 10;        
const int G = 11;         
int pausa = 500;          


//********** Setup ****************************************************************
void setup()
{
  pinMode(A, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 11 com una sortida
  
  digitalWrite(A, HIGH);   
  digitalWrite(B, HIGH);     
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH); 
  digitalWrite(F, HIGH);    
  digitalWrite(G, LOW);    

  delay(pausa);               
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(A, LOW);    // número 1         
  digitalWrite(D, LOW);     
  digitalWrite(E, LOW);     
  digitalWrite(F, LOW);       
  
  delay(pausa);               
  
  digitalWrite(A, HIGH);   // número 2          
  digitalWrite(C, LOW);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);     
  digitalWrite(G, HIGH);   
    
  delay(pausa);              
  
  digitalWrite(C, HIGH);   // número 3          
  digitalWrite(E, LOW);    
    
  delay(pausa);             
  
  digitalWrite(A, LOW);    // número 4    
  digitalWrite(D, LOW);     
  digitalWrite(F, HIGH);   
      
  delay(pausa);              
  
  digitalWrite(A, HIGH);   // número 5 
  digitalWrite(B, LOW); 
  digitalWrite(D, HIGH);   
        
  delay(pausa);              
  
  digitalWrite(A, LOW);    // número 6        
  digitalWrite(E, HIGH);  
          
  delay(pausa);              
  
  digitalWrite(A, HIGH);   // número 7
  digitalWrite(B, HIGH);  
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);    
            
  delay(pausa);               
  
  digitalWrite(D, HIGH);   // número 8  
  digitalWrite(E, HIGH); 
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);   
              
  delay(pausa);             
  
  digitalWrite(D, LOW);    // número 9
  digitalWrite(E, LOW);    
                
  delay(pausa);              
  
  digitalWrite(D, HIGH);   // número 0    
  digitalWrite(E, HIGH);    
  digitalWrite(G, LOW);       

  delay(pausa);               
}
