quiz_02,248,383,3	script	Licht	925,{
		OnTimer5000:
		npctalk "Lumiere!!!";	
		sleep 5000;
		initnpctimer;
		end;
	OnInit:
		initnpctimer;
		end;
}
job_star,33,36,3	script	Patolli	922,{
	
	mes "[Patolli]";
	mes "Viviamos em paz e eramos livres.";
	next;
	mes "[Patolli]";
	mes "Todos receberam seus Grim�rios e ent�o festejariamos.";
	next;
	mes "[Patolli]";
	mes "Litch-san, nosso protetor e nossa esperan�a, foi glorificado com um Grim�rio de 4*.";
	next;
	cutin "06.bmp",3;
	next;
	cutin 255,2;
	next;
	mes "[Patolli]";
	mes "Um dia n�s fomos aben�oados por 2 novas amizades.";
	next;
	mes "[Patolli]";
	mes "Lumiere e T�tia.";
	next;
	mes "[Patolli]";
	mes "Lumiere, que pensava igual a n�s, era um idealista e tamb�m tinha esperan�a na uni�o de Elfos com Humanos. Ele tamb�m nos revelou logo ap�s que tamb�m foi glorificado com um Grim�rio de 4*.";
	next;
	cutin "03.bmp",3;
	mes "[Patolli]";
	mes "J� T�tia, tinha um Grim�rio de 3 folhas e era usu�ria do elemento Vento. Ela se apaixonou por Litch-san e os dois sem amaram rapidamente.";
	next;
	cutin 255,2;
	next;
	cutin "02.bmp",3;
	mes "[Patolli]";
	mes "Lumiere e Litch-san, se tornaram melhores amigos, aceitando a uni�o de sua irm� e Litch-san.";
	next;
	cutin 255,2;
	next;
	mes "[Patolli]";
	mes "Lumiere, voltou para a Capital Real. Deixando T�tia nas m�os de seu melhor amigo e sabia que ele daria a vida para salva-la se fosse o caso.";
	next;
	cutin "01.bmp",3;
	next;
	cutin 255,2;
	next;
	cutin "07.bmp",3;
	mes "[Patolli]";
	mes "T�tia, ficou gravida de Litch-san e ent�o foi marcado a data do casamento.";
	next;
	close;
	
	
	
	
}
quiz_02,246,385,3	script	Vetto	924,{
	
	OnTimer5000:
		npctalk "Desespero!!!";	
		sleep 5000;
		initnpctimer;
		end;
	OnInit:
		initnpctimer;
		end;
}
quiz_02,253,385,3	script	Fana	924,{
	
	OnTimer5000:
		npctalk "Morte!!!";	
		sleep 5000;
		initnpctimer;
		end;
	OnInit:
		initnpctimer;
		end;
}
quiz_02,251,383,3	script	Rhya	925,{
	
	OnTimer5000:
		npctalk "Mentira!!!";	
		sleep 5000;
		initnpctimer;
		end;
	OnInit:
		initnpctimer;
		end;
}
quiz_02,263,365,3	script	L�pide Sagrada	406,{
	
}
quiz_02,250,380,3	script	Patolli#2	922,{
	
	//unitwalk getcharid(3),237,378;
	//unittalk getcharid(3),"Onde estou?",bc_self;
	//message strcharinfo(0),"Teste";
	/*hideonnpc "Npc De Teste";
	hideonnpc "L�pide Sagrada";
	sleep 3000;
	hideoffnpc "Npc De Teste";
	hideoffnpc "L�pide Sagrada";*/
	
	/*disablenpc "L�pide Sagrada";
	sleep 5000;
	npctalk "Est� me procurando?","L�pide Sagrada",bc_area;
	sleep 5000;
	npctalk "MUHAHAHAHAH!!!","L�pide Sagrada",bc_area;
	sleep 5000;
	enablenpc "L�pide Sagrada";*/
	
	OnTimer5000:
		hideonnpc "Drowa";
		hideonnpc "Lira";
		hideonnpc "Reve";
		hideonnpc "Charla";
		hideonnpc "Ratri";
		hideonnpc "Eclat";
		
		
		moveNPC "Drowa",252,380;
		moveNPC "Lira",254,379;
		moveNPC "Reve",248,380;
		moveNPC "Charla",246,379;
		moveNPC "Ratri",245,377;
		moveNPC "Eclat",255,377;
		
		npctalk "Seja Bem-Vindo ao mundo de Black Clover Ragnarok Online.","Patolli#2",BC_AREA;
		sleep 8000;
		
		npctalk "Contarei para voc�, uma hist�ria ilustrativa e textual.","Patolli#2",BC_AREA;
		sleep 8000;
		
		npctalk "Se est� preparado... Fique entre 3 a 4 c�lulas de dist�ncia de min.","Patolli#2",BC_AREA;
		sleep 8000;
		
		hideoffnpc "Drowa";
		sleep 500;
		hideoffnpc "Lira";
		sleep 500;
		hideoffnpc "Reve";
		sleep 500;
		hideoffnpc "Charla";
		sleep 500;
		hideoffnpc "Ratri";
		sleep 500;
		hideoffnpc "Eclat";
		sleep 5000;
		
		npctalk " Magia de Espelhos: Reflex�o do Conto!!!","Drowa",BC_AREA;
		atcommand "@effect 965";
		sleep 8000;
		
		areawarp "quiz_02",250,377,250,376,"job_star",34,14;
		initnpctimer;
		end;

	OnInit:
		initnpctimer;
		end;
	
}
quiz_02,256,388,3	script	Drowa	1634,{
	
}
quiz_02,243,388,3	script	Lira	1636,{
	
}
quiz_02,241,388,3	script	Reve	1655,{
	
}
quiz_02,258,388,3	script	Charla	1643,{
	
}
quiz_02,260,388,3	script	Ratri	1651,{
	
}
quiz_02,239,388,3	script	Eclat	1653,{
	
}
quiz_02,272,388,3	script	Flor Venenosa#1	613,{
	
	OnTimer2000:
		atcommand "@effect 1083";
	
	initnpctimer;
		end;

	OnInit:
		initnpctimer;
		end;
}
quiz_02,272,369,3	script	Flor Venenosa#2	613,{
	
	OnTimer2000:
		atcommand "@effect 1083";
	
	initnpctimer;
		end;

	OnInit:
		initnpctimer;
		end;
}
quiz_02,250,369,3	script	Flor Venenosa#3	613,{
	
	OnTimer2000:
		atcommand "@effect 1083";
	
	initnpctimer;
		end;

	OnInit:
		initnpctimer;
		end;
}
quiz_02,227,369,3	script	Flor Venenosa#4	613,{
	
	OnTimer2000:
		atcommand "@effect 1083";
	
	initnpctimer;
		end;

	OnInit:
		initnpctimer;
		end;
}
quiz_02,227,388,3	script	Flor Venenosa#5	613,{
	
	OnTimer2000:
		atcommand "@effect 1083";
	
	initnpctimer;
		end;

	OnInit:
		initnpctimer;
		end;
}
yuno_in02,91,210,3	script	Maga	665,{
	
}
yuno_in02,93,210,3	script	Mago	654,{
	
}
yuno_in02,95,210,3	script	Especialista	667,{
	
}
yuno_in02,90,207,3	script	Plague Doctor	705,{
	
}
yuno_in02,96,207,3	script	Monge	704,{
	
}
yuno_in02,93,205,2	script	Senhor do Templo	679,{
	
	if(JobLevel >= 10){
	mapannounce "yuno_in02", "[SENHOR]: SE EST�O PRONTOS, VAMOS COME�AR � CERIM�NIA DE GRIM�RIOS!!", bc_map, 0x8000FF, 10, 10;
	sleep2 5000;
	mapannounce "yuno_in02", "[SENHOR]: NA PRESEN�A DESTES EXELENTES MAGOS... QUE � MAGIA ACONTE�A!!", bc_map, 0x8000FF, 10, 10;
	sleep2 5000;
	atcommand "@effect 6";
	warp("yuno_in03",104,120);
	end;
	};
	dispbottom "VOLTE QUANDO TIVER 10 DE JOB/IDADE.";
}
yuno_in02,90,83,3	script	January	916,{
	npctalk "L�";
}
yuno_in02,91,83,3	script	February 	916,{
	 npctalk "L�";	
}
yuno_in02,92,83,3	script	March 	916,{
	npctalk "L�";
}
yuno_in02,93,83,3	script	April 	916,{
	npctalk "L�";
}
yuno_in02,94,83,3	script	May 	916,{
	npctalk "L�";
}
yuno_in02,95,83,3	script	June 	916,{
	npctalk "L�";
}
yuno_in02,96,83,3	script	July 	916,{
	npctalk "L�";
}
yuno_in02,97,83,3	script	August 	916,{
	npctalk "L�";
}
yuno_in02,90,75,3	script	Marin	620,{
	
}
yuno_in02,112,70,3	script	Nultrion	623,{
	
}
yuno_in02,90,95,3	script	Noitra	636,{
	
}
yuno_in02,90,98,3	script	Moniha	644,{
	
}
yuno_in02,97,105,3	script	Moru	645,{
	
}
yuno_in02,97,108,3	script	Kadida	639,{
	
}
yuno_in02,87,160,3	script	Beel	834,{
	
}
yuno_in02,98,172,3	script	Boo	874,{
	
}
hugel,163,115,3	script	Lily Aquaria	66,{
	
	if(countitem(501) >= 1 ) { 
	
		npctalk "Magia de Cria��o de �gua: Ben��o da Deusa!";
		atcommand "@effect 14";
		skilleffect  34 , 0 ; sc_start  SC_BLESSING , 360000 , 10 ;
		skilleffect  29 , 0 ; sc_start  SC_INCREASEAGI , 360000 , 10 ;
		end;
	};
	mes "[Lily Aquaria]";
	mes "Voc� n�o vai acabar se atrasando?";
	next;
	mes "[Lily Aquaria]";
	mes "Corra para a Torre dos Grim�rios.";
	next;
	mes "[Lily Aquaria]";
	mes "Mas leve isso com voc�.";
	getitem 501,10;
	next;
	mes "[Lily Aquaria]";
	mes "Vai ser �til na sua jornada.";
	next;
	mes "[Lily Aquaria]";
	mes "N�o d� para acreditar... Voc� vai receber um Grim�rio.";
	next;
	mes "[Lily Aquaria]";
	mes "Boa sorte.";
	next;
	close2;
	npctalk "Magia de Cria��o de �gua: Ben��o da Deusa!";
	atcommand "@effect 14";
	skilleffect  34 , 0 ; sc_start  SC_BLESSING , 360000 , 10 ;
	skilleffect  29 , 0 ; sc_start  SC_INCREASEAGI , 360000 , 10 ;
	end;

}

hugel,100,146,3	shop	Loja de suprimentos#1	73,611:50,501:100,662:100
pay_arche,127,108,3	shop	Loja de suprimentos#2	73,611:50,501:100,662:100
hugel,81,151,5	shop	Loja de Armas magicas#3	73,1502:10000,1472:25000,1132:30000
hugel,92,149,5	shop	Loja de Botas magicas#4	75,2425:15000,2418:20000,2405:25000