// Source MD5: 70b229955925c59abe63ed267bc83a3b

#include "pbpk-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
Vad = BW*FVad;  
Vbo = BW*FVbo;  
Vbr = BW*FVbr;  
Vgu = BW*FVgu;  
Vhe = BW*FVhe;  
Vki = BW*FVki;  
Vli = BW*FVli;  
Vlu = BW*FVlu;  
Vmu = BW*FVmu;  
Vsk = BW*FVsk;  
Vsp = BW*FVsp;  
Vte = BW*FVte;  
Vve = BW*FVve;  
Var = BW*FVar;  
Vpl = BW*FVpl;  
Vrb = BW*FVrb;  
Vre = BW*FVre;  
Vplas_ven = Vpl*Vve/(Vve + Var) 	;  
Vplas_art = Vpl*Var/(Vve + Var) 	;  
QC  = CO/1000*60*60 ;  
Qad = QC*FQad       ;  
Qbo = QC*FQbo       ;  
Qbr = QC*FQbr       ;  
Qgu = QC*FQgu       ;  
Qhe = QC*FQhe       ;  
Qki = QC*FQki       ;  
Qh  = QC*FQh        ;  
Qha = Qh - Qgu - Qsp;  
Qlu = QC*FQlu       ;  
Qmu = QC*FQmu       ;  
Qsk = QC*FQsk       ;  
Qsp = QC*FQsp       ;  
Qte = QC*FQte       ;  
Qre = QC*FQre       ;  
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
Cadipose  = Aad/Vad;  
Cbone     = Abo/Vbo;  
Cbrain    = Abr/Vbr;  
Cgut      = Agu/Vgu;  
Cheart    = Ahe/Vhe;  
Ckidney   = Aki/Vki;  
Cliver    = Ali/Vli;  
Clung     = Alu/Vlu;  
Cmuscle   = Amu/Vmu;  
Cskin     = Ask/Vsk;  
Cspleen   = Asp/Vsp;  
Ctestes   = Ate/Vte;  
Cvenous   = Ave/Vve;  
Carterial = Aar/Var;  
Crest     = Are/Vre;  
Cliverfree  = Cliver*fup;  
Ckidneyfree = Ckidney*fup; 
MPPGL = 45; 
CLmet = (HLM_CLint/fumic)*MPPGL*Vli*60/1000; 
Venous = 
  Qad*(Cadipose/Kpad*BP) + Qbo*(Cbone/Kpbo*BP)   + 
  Qbr*(Cbrain/Kpbr*BP)   + Qhe*(Cheart/Kphe*BP)  + Qki*(Ckidney/Kpki*BP) + 
  Qh*(Cliver/Kpli*BP)    + Qmu*(Cmuscle/Kpmu*BP) + Qsk*(Cskin/Kpsk*BP) + 
  Qte*(Ctestes/Kpte*BP)  + Qre*(Crest/Kpre*BP);
Absorption = Ka*D; 
dxdt_Aad = Qad*(Carterial - Cadipose/Kpad*BP);    
dxdt_Abo = Qbo*(Carterial - Cbone/Kpbo*BP);       
dxdt_Abr = Qbr*(Carterial - Cbrain/Kpbr*BP);      
dxdt_Agu = Absorption + 
           Qgu*(Carterial - Cgut/Kpgu*BP);        
dxdt_Ahe = Qhe*(Carterial - Cheart/Kphe*BP);      
dxdt_Aki = Qki*(Carterial - Ckidney/Kpki*BP) - 
           CLrenal*Ckidneyfree;                   
dxdt_Ali = Qha*Carterial + 
           Qgu*(Cgut/Kpgu*BP) + 
           Qsp*(Cspleen/Kpsp*BP) - 
           Qh*(Cliver/Kpli*BP) - 
           Cliverfree*CLmet;                      
dxdt_Alu = Qlu*Cvenous - Qlu*(Clung/Kplu*BP);     
dxdt_Amu = Qmu*(Carterial - Cmuscle/Kpmu*BP);     
dxdt_Ask = Qsk*(Carterial - Cskin/Kpsk*BP);       
dxdt_Asp = Qsp*(Carterial - Cspleen/Kpsp*BP);     
dxdt_Ate = Qte*(Carterial - Ctestes/Kpte*BP);     
dxdt_Ave = Venous - Qlu*Cvenous;                  
dxdt_Aar = Qlu*(Clung/Kplu*BP) - Qlu*Carterial;   
dxdt_Are = Qre*(Carterial - Crest/Kpre*BP);       
dxdt_D   = - Absorption;                          
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
Cvenous = Ave/Vve;
Cp = Cvenous/BP	; 
_capture_[0] = Cvenous;
_capture_[1] = Cp;
__END_table__
