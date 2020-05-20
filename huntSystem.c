tha_t11,27,83,5	script	Lobo Caçador	1785,{

	
	if(hpLobo1 >= 5) 
	{
		
		hideonnpc "Lobo Caçador";
		hideoffnpc "Cadaver";
		end;
		
OnInit:	
		
		OnTimer3600000:
		hideoffnpc "Lobo Caçador";
		hideonnpc "Cadaver";
		hideonnpc "Loot";
		hideoffnpc "Esconderijo";
		initnpctimer;
		end;
		
	}
	if (hpLobo1 == 3){
		atcommand "@monster 1013";
	}
	
	switch(rand(1,2))
	{
		case 1:
		announce "Você feriu o alvo e ele perdeu 5 de vida.",BC_BLUE|SELF;
		atcommand "@effect 892";
		npctalk "Grooowth!!!";
		set hpLobo1, hpLobo1 + 1;
		end;
		case 2:
		announce "Você foi ferido e perdeu 10% de vida.",BC_BLUE|SELF;
		percentheal -10,0;
		npctalk "Grawll!!!";
		atcommand "@effect 967";
		end;
			
	}
	
}

tha_t11,27,83,5	script	Cadaver	1178,{
	
	set hpLobo1,0;
	
	npctalk "[Preparando Loot]";
	sleep 1000;
	npctalk "[10% #]";
	sleep 1000;
	npctalk "[20% ##]";	
	sleep 1000;
	npctalk "[30% ###]";
	sleep 1000;
	npctalk "[40% ####]";	
	sleep 1000;
	npctalk "[50% #####]";
	sleep 1000;
	npctalk "[60% ######]";
	sleep 1000;
	npctalk "[70% #######]";
	sleep 1000;
	npctalk "[80% ########]";	
	sleep 1000;
	npctalk "[90% #########]";	
	sleep 1000;
	npctalk "[100% ##########]";
	npctalk "[Preparando com Sucesso]";
	hideonnpc "Cadaver";
	hideoffnpc "Loot";
	end;
}

tha_t11,27,83,5	script	Loot	60,{
	
	switch( rand(1,10)) 
	{
		case 1: getitem 517,5; hideonnpc "Loot"; end;
		
		case 2: getitem 1302,1; hideonnpc "Loot"; announce "O player " + strcharinfo(0) + " dropou " + "'" + getitemname(1302) + "'" + " do Lobo Caçador.",0; end;
		
		case 3: getitem 702,5; hideonnpc "Loot"; end;
		
		case 4: getitem 517,5; hideonnpc "Loot"; end;
		
		case 5: getitem 517,5; hideonnpc "Loot"; end;
		
		case 6: getitem 517,5; hideonnpc "Loot"; end;
		
		case 7: getitem 517,5; hideonnpc "Loot"; end;
		
		case 8: getitem 517,5; hideonnpc "Loot"; end;
		
		case 9: getitem 517,5; hideonnpc "Loot"; end;
		
		case 10: getitem 517,5; hideonnpc "Loot"; end;
	}
	
}


prt_fild08,208,284,5	script	Esconderijo	723,{

	warp "tha_t11",17,85;
	hideonnpc "Esconderijo";
	end;
}

tha_t11,17,85,5	script	Saidá	111,{
	
	warp "prt_fild08",208,284;
}