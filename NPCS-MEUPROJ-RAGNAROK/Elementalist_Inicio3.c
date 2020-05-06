prt_fild08,166,371,3	script	Guarda Ittoryu	708,{
	
	.@NpcName$ = "[Guarda Ittoryu]";
	
	mes .@NpcName$;
	mes "Hey, você ai mesmo.";
	next;
	
	//----------------------------//
	
	mes .@NpcName$;
	mes "De que casa você é?";
	next;
	
	//----------------------------//
	
	mes .@NpcName$;
	mes "Pelo cheiro em sua volta você é do elemento " + elemento$ + ".";
	next;
	
	//----------------------------//
	
	mes .@NpcName$;
	if(elemento$ == "Terra"){ 
		mes "Hmph, você é da casa RE.";
		next;
		mes .@NpcName$;
		mes "Hoje vocês novatos vão aprender a usar seus elementos, então corra!";
		next;
		warp "prontera",174,188;
		close;
	}
	
	mes .@NpcName$;
	if(elemento$ == "Água"){ 
		mes "Hmph, você é da casa Arunafeltz.";
		next;
		mes .@NpcName$;
		mes "Hoje vocês novatos vão aprender a usar seus elementos, então corra!";
		next;
		close;
	}
	
	mes .@NpcName$;
	if(elemento$ == "Vento"){ 
		mes "Hmph, você é da casa Rune-Midgard.";
		next;
		mes .@NpcName$;
		mes "Hoje vocês novatos vão aprender a usar seus elementos, então corra!";
		next;
		close;
	}
	
	if(elemento$ == "Fogo"){ 
		mes "Troque de roupas logo e vá...";
		next;
		mes .@NpcName$;
		mes "Hoje vocês novatos vão aprender a usar seus elementos, então corra!";
		next;
		close;
	}
}

//PORTAIS-NPCS-SWIT-FARDA
prontera,178,191,1	script	Casa RE#1	722,{}
prontera,172,185,1	script	Casa RE#2	722,{}
prontera,178,185,1	script	Entrada	723,{ warp "aldeba_in",239,237; }
aldeba_in,243,238,1	script	Saída	723,{ if( jasetrocou == 1 ) {warp "prontera",176,187; } mes "Você não pode sair porque ainda não mudou de roupa."; close; }


