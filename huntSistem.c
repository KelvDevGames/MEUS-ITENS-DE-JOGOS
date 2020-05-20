prt_fild04,371,291,5	script	Lobo Caçador	1785,{

	
	if(hpVaca >= 5) {
		cutin "caça.bmp",4;
		hideonnpc "Lobo Caçador";
		hideoffnpc "Loot";
		OnTimer6000:
		end;
OnInit:	
		
		OnTimer3600000:
		hideoffnpc "Lobo Caçador";
		hideonnpc "Loot";
		initnpctimer;
		end;
		
	}
	switch(rand(1,2)){
		case 1:
		announce "Você feriu o alvo e ele perdeu 5 de vida.",BC_BLUE|SELF;
		atcommand "@effect 892";
		npctalk "Grooowth!!!";
		npcwalkto 370,285;
		set hpVaca, hpVaca + 1;
		end;
		case 2:
		announce "Você foi ferido e perdeu 5 de vida.",BC_YELLOW|SELF;
		percentheal -5,0;
		npctalk "Grawll!!!";
		atcommand "@effect 967";
		npcwalkto 371,291;
		end;
			
	}	
}

prt_fild04,371,291,1	script	Loot	2372,{
	
	initnpctimer;
	
	OnTimer1000:
	npctalk "[10%]";
	atcommand "@effect 983";
	atcommand "@useskill 358 1 " + strcharinfo(0);
	end;
	
	OnTimer2000:
	npctalk "[20%]";
	atcommand "@effect 983";
	end;
	
	OnTimer3000:
	npctalk "[30%]";
	atcommand "@effect 983";
	end;
	
	OnTimer4000:
	npctalk "[40%]";
	atcommand "@effect 983";
	end;
	
	OnTimer5000:
	npctalk "[50%]";
	atcommand "@effect 983";
	end;
	
	OnTimer6000:
	npctalk "[60%]";
	atcommand "@effect 983";
	end;
	
	OnTimer7000:
	npctalk "[70%]";
	atcommand "@effect 983";
	end;
	
	OnTimer8000:
	npctalk "[80%]";
	atcommand "@effect 983";
	end;
	
	OnTimer9000:
	npctalk "[90%]";
	atcommand "@effect 983";
	end;
	
	OnTimer10000:
	npctalk "[100%]";
	atcommand "@effect 983";
	end;
	
	OnTimer11000:
	atcommand "@effect 158";
	npctalk "[Loot recolhido com sucesso]";
	getitem idDoItem,quantidadeAReceber;
	end;
	
	OnTimer12000:
	hideonnpc "Loot";
	stopnpctimer;
}