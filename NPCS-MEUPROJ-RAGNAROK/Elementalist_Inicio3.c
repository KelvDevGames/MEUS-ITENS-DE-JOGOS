prt_fild08,166,371,3	script	Guarda Ittoryu	708,{
	
	.@NpcName$ = "[Guarda Ittoryu]";
	
	mes .@NpcName$;
	mes "Hey, voc� ai mesmo.";
	next;
	
	//----------------------------//
	
	mes .@NpcName$;
	mes "De que casa voc� �?";
	next;
	
	//----------------------------//
	
	mes .@NpcName$;
	mes "Pelo cheiro em sua volta voc� � do elemento " + elemento$ + ".";
	next;
	
	//----------------------------//
	
	mes .@NpcName$;
	if(elemento$ == "Terra"){ 
		mes "Hmph, voc� � da casa RE.";
		next;
		mes .@NpcName$;
		mes "Hoje voc�s novatos v�o aprender a usar seus elementos, ent�o corra!";
		next;
		warp "prontera",174,188;
		close;
	}
	
	mes .@NpcName$;
	if(elemento$ == "�gua"){ 
		mes "Hmph, voc� � da casa Arunafeltz.";
		next;
		mes .@NpcName$;
		mes "Hoje voc�s novatos v�o aprender a usar seus elementos, ent�o corra!";
		next;
		close;
	}
	
	mes .@NpcName$;
	if(elemento$ == "Vento"){ 
		mes "Hmph, voc� � da casa Rune-Midgard.";
		next;
		mes .@NpcName$;
		mes "Hoje voc�s novatos v�o aprender a usar seus elementos, ent�o corra!";
		next;
		close;
	}
	
	if(elemento$ == "Fogo"){ 
		mes "Troque de roupas logo e v�...";
		next;
		mes .@NpcName$;
		mes "Hoje voc�s novatos v�o aprender a usar seus elementos, ent�o corra!";
		next;
		close;
	}
}

//PORTAIS-NPCS-SWIT-FARDA
prontera,178,191,1	script	Casa RE#1	722,{}
prontera,172,185,1	script	Casa RE#2	722,{}
prontera,178,185,1	script	Entrada	723,{ warp "aldeba_in",239,237; }
aldeba_in,243,238,1	script	Sa�da	723,{ if( jasetrocou == 1 ) {warp "prontera",176,187; } mes "Voc� n�o pode sair porque ainda n�o mudou de roupa."; close; }


