aldeba_in,220,235,3	script	Nojimalu	716,{
	
	if(jasetrocou == 1){
		mes .@NpcName$;
		mes "Oniii-sama...";
		next;
		mes .@NpcName$;
		mes "Você se trocou...";
		close;	
	}
	.@NpcName$ = "[Nojimalu]";
	
	mes .@NpcName$;
	mes "Oniii-sama..";
	next;
	mes .@NpcName$;
	mes "Vista-se logo...";
	next;
	mes .@NpcName$;
	jobchange 24;
	set jasetrocou,1;
	mes "Uau, você está muito estiloso.";
	close;
	
	
}