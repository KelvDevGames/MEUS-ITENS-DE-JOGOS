yuno_in02,88,64,3	script	Sword Smith	63,{
	
	if(countitem(2683) >= 1 || countitem(2682) >= 1 || countitem(2684) >= 1 || countitem(2685) >= 1 || countitem(2936) >= 1 || countitem(2703) >= 1 || countitem(2677) >= 1 || countitem(2678) >= 1) {
		mes "[Sword Smith]";
		mes "Voc� j� tem um item...";
		next;
		mes "[Sword Smith]";
		mes "Avance para o pr�ximo n�vel.";
		close;
	}
	mes "[Sword Smith]";
	mes "Ol�, " +strcharinfo(0)+".";
	next;
	mes "[Sword Smith]";
	mes "Eu tenho alguns itens interessantes aqui, deseja dar uma olhada?";
	next;
	if(select("Sim","N�o")==2){
		
		mes "[Sword Smith]";
		mes "Tudo bem, estarei aqui caso mude de ideia.";
		close;	
	}
	mes "[Sword Smith]";
	mes "Bem, estes s�o os itens que tenho...";
	next;
	mes "[Sword Smith]";
	mes "Sobre qual deles vai querer saber mais?";
	next;
	switch(select("Anel do Especialista","Anel da Honra","Anel do Lorde Flamejante")){
		case 1:
		mes "[Sword Smith]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2703);
		next;
		mes "[Sword Smith]";
		mes "Mas em troca me traga: ";
		mes "10x " + getitemname(909);
		next;
		mes "[Sword Smith]";
		mes "Por acaso, se quiser concluir...";
		next;
		mes "Vi monstros na dire��o - [OESTE]";
		next;
		mes "[Sword Smith]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","N�o")==2){
			
			mes "[Sword Smith]";
			mes "Beless!";
			close;
		}
		if(countitem(909) >= 10){
			delitem 909,10;
			getitem 2703,1;
			atcommand "@jlvl 10";
			atcommand "@effect 62";
			mes "[Sword Smith]";
			mes "Parab�ns! Agora voc� est� pronto para se tornar um Mago";
			close;	
		}
		break;
		case 2:
		mes "[Sword Smith]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2677);
		next;
		mes "[Sword Smith]";
		mes "Mas em troca me traga: ";
		mes "10x " + getitemname(914);
		next;
		mes "[Sword Smith]";
		mes "Por acaso, se quiser concluir...";
		next;
		mes "[Sword Smith]";
		mes "Vi monstros na dire��o - [OESTE]";
		next;
		mes "[Sword Smith]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","N�o")==2){
			mes "[Sword Smith]";
			mes "Beless!";
			close;
		}
		if(countitem(914) >= 10){
			
			delitem 914,10;
			getitem 2677,1;
			atcommand "@jlvl 10";
			atcommand "@effect 101";
			mes "[Sword Smith]";
			mes "Parab�ns! Agora voc� est� pronto para se tornar um Mago";
			close;	
		}
		break;
		case 3:
		mes "[Sword Smith]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2678);
		next;
		mes "Mas em troca me traga: ";
		mes "10x " + getitemname(915);
		next;
		mes "[Sword Smith]";
		mes "Por acaso, queira concluir...";
		next;
		mes "[Sword Smith]";
		mes "Vi monstros na dire��o - [OESTE]";
		next;
		mes "[Sword Smith]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","N�o")==2){
			
			mes "[Sword Smith]";
			mes "Beless!";
			close;
		}
		if(countitem(915) >= 10){
			
			delitem 915,10;
			getitem 2678,1;
			atcommand "@effect 102";
			atcommand "@jlvl 10";
			mes "[Sword Smith]";
			mes "Parab�ns! Agora voc� est� pronto para se tornar um Mago";
			close;	
		}
		break;
	}
		mes "[Sword Smith]";
		mes "Me desculpe, mas voc� n�o tem todos os itens necess�rios para esta quest.";
		next;
		mes "[Sword Smith]";
		mes "Volte quando voc� tiver todos os itens!";
		close;
	
}

yuno_in02,100,60,3	script	Wizard N�x	64,{
	
	if(countitem(2683) >= 1 || 
	countitem(2682) >= 1 || 
	countitem(2684) >= 1 || 
	countitem(2685) >= 1 || 
	countitem(2936) >= 1 || 
	countitem(2703) >= 1 || countitem(2677) >= 1 || countitem(2678) >= 1)
	{
		mes "Ops! Voc� j� fez essa quest...";
		mes "Avance para n�o ficar para tr�s...";
		close;
	}

	mes "[N�x]";
	mes "Ol� " +strcharinfo(0)+"!";
	mes "Eu tenho alguns itens interessantes aqui, deseja dar uma olhada?";
	next;
	if(select("Sim","N�o")==2){
		
		mes "[N�x]";
		mes "Tudo bem, estarei aqui caso mude de id�ia.";
		close;	
	}
	mes "[N�x]";
	mes "Bem, estes s�o os itens que eu tenho...";
	mes "Sobre qual deles vai querer saber mais?";
	next;
	switch(select("Anel do Fogo","Anel da Agua","Anel do Vento","Anel da Terra","Anel do Trov�o")){
		case 1:
		mes "[N�x]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2683);
		next;
		mes "Em troca me traga...";
		mes "10x " + getitemname(507);
		next;
		mes "H� caso queira concluir, te darei uma dica...";
		next;
		mes "Vi plantas na dire��o - [LESTE]";
		next;
		mes "[N�x]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","N�o")==2){
			
			mes "[N�x]";
			mes "Beless!";
			mes "At� mais tarde";
			close;
		}
		if(countitem(507) >= 10){
			
			delitem 507,10;
			getitem 2683,1;
			atcommand "@jlvl 10";
			atcommand "@effect 55";
			mes "[N�x]";
			mes "Parab�ns! Agora voc� est� pronto para se tornar um Mago";
			close;	
		}
		break;
		case 2:
		mes "[N�x]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2682);
		next;
		mes "Em troca me traga...";
		mes "10x " + getitemname(510);
		next;
		mes "H� caso queira concluir, te darei uma dica...";
		next;
		mes "Vi plantas na dire��o - [LESTE]";
		next;
		mes "[N�x]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","N�o")==2){
			
			mes "[N�x]";
			mes "Beless";
			mes "At� mais tarde";
			close;
		}
		if(countitem(510) >= 10){
			
			delitem 510,10;
			getitem 2682,1;
			atcommand "@jlvl 10";
			atcommand "@effect 54";
			mes "[N�x]";
			mes "Parab�ns! Agora voc� est� pronto para se tornar um Mago";
			close;	
		}
		break;
		case 3:
		mes "[N�x]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2684);
		next;
		mes "Em troca me traga...";
		mes "10x " + getitemname(511);
		next;
		mes "H� caso queira concluir, te darei uma dica...";
		next;
		mes "Vi plantas na dire��o - [LESTE]";
		next;
		mes "[N�x]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","N�o")==2){
			
			mes "[N�x]";
			mes "Beless";
			mes "At� mais tarde";
			close;
		}
		if(countitem(511) >= 10){
			
			delitem 511,10;
			getitem 2684,1;
			atcommand "@jlvl 10";
			atcommand "@effect 56";
			mes "[N�x]";
			mes "Parab�ns! Agora voc� est� pronto para se tornar um Mago";
			close;	
		}
		break;
		case 4:
		mes "[N�x]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2685);
		next;
		mes "Em troca me traga...";
		mes "10x " + getitemname(508);
		next;
		mes "H� caso queira concluir, te darei uma dica...";
		next;
		mes "Vi plantas na dire��o - [LESTE]";
		next;
		mes "[N�x]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","N�o")==2){
			
			mes "[N�x]";
			mes "Beless";
			mes "At� mais tarde";
			close;
		}
		if(countitem(508) >= 10){
			
			delitem 508,10;
			getitem 2685,1;
			atcommand "@jlvl 10";
			atcommand "@effect 57";
			mes "[N�x]";
			mes "Parab�ns! Agora voc� est� pronto para se tornar um Mago";
			close;	
		}
		break;
		case 5:
		mes "[N�x]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2936);
		next;
		mes "Em troca me traga...";
		mes "10x " + getitemname(509);
		next;
		mes "H� caso queira concluir, te darei uma dica...";
		next;
		mes "Vi plantas na dire��o - [LESTE]";
		next;
		mes "[N�x]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","N�o")==2){
			
			mes "[N�x]";
			mes "Beless";
			mes "At� mais tarde";
			close;
		}
		if(countitem(509) >= 10){
			
			delitem 509,10;
			getitem 2936,1;
			atcommand "@jlvl 10";
			atcommand "@effect 57";
			mes "[N�x]";
			mes "Parab�ns! Agora voc� est� pronto para se tornar um Mago";
			close;	
		}
		break;	
	}
	mes "[N�x]";
	mes "Me desculpe, mas voc� n�o tem todos os itens necess�rios para esta quest.";
	mes "Volte quando voc� tiver todos os itens!";
	close;

}

yuno_in03,109,122,6	script	Grim�rio das Chamas	2897,{
	if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Voc� j� recebeu seu Grim�rio, fale com o Anci�o!";
		close2;
		warp("yuno_in03",105,128);
	}
	if(!countitem(1555) >= 1 || countitem(502) >= 1){
	switch(rand(1,2)){
		case 1:
		getitem 1555,1;
		break;
		case 2:
		getitem 502,1;
		break;
	}
	}

}
yuno_in03,109,118,6	script	Grim�rio das Almas	2897,{
if(countitem(1577) >= 1 || countitem(502) >= 1){
		mes "Voc� j� recebeu seu Grim�rio, fale com o Wizard!";
		close2;
		warp("yuno_in03",105,128);
	}
	if(!countitem(1577) >= 1 || countitem(502) >= 1){
	switch(rand(1,2)){
		case 1:
		getitem 1577,1;
		break;
		case 2:
		getitem 502,1;
		break;
	}
	}


}
yuno_in03,109,120,6	script	Grim�rio das �guas	2897,{
if(countitem(1553) >= 1 || countitem(502) >= 1){
		mes "Voc� j� recebeu seu Grim�rio, fale com o Wizard!";
		close2;
		warp("yuno_in03",105,128);
	}
	if(!countitem(1553) >= 1 || countitem(502) >= 1){
	switch(rand(1,2)){
		case 1:
		getitem 1553,1;
		break;
		case 2:
		getitem 502,1;
		break;
	}
	}


}
/*yuno_in03,98,119,6	script	Grim�rio da Terra	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Voc� j� recebeu seu Grim�rio, fale com o Wizard!";
		close2;
		warp("yuno_in03",105,128);
	}
	if(!countitem(1555) >= 1 || countitem(502) >= 1){
	switch(rand(1,2)){
		case 1:
		getitem 1555,1;
		break;
		case 2:
		getitem 502,1;
		break;
	}
	}


}*/
/*yuno_in03,98,116,6	script	Grim�rio do Vento	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Voc� j� recebeu seu Grim�rio, fale com o Wizard!";
		close2;
		warp("yuno_in03",105,128);
	}
	if(!countitem(1555) >= 1 || countitem(502) >= 1){
	switch(rand(1,2)){
		case 1:
		getitem 1555,1;
		break;
		case 2:
		getitem 502,1;
		break;
	}
	}


}*/
/*yuno_in03,98,123,6	script	Grim�rio do Trov�o	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Voc� j� recebeu seu Grim�rio, fale com o Wizard!";
		close2;
		warp("yuno_in03",105,128);
	}
	if(!countitem(1555) >= 1 || countitem(502) >= 1){
	switch(rand(1,2)){
		case 1:
		getitem 501,1;
		break;
		case 2:
		getitem 502,1;
		break;
	}
	}


}*/
yuno_in03,107,114,6	script	Grim�rio do Tempo	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Voc� j� recebeu seu Grim�rio, fale com o Wizard!";
		close2;
		warp("yuno_in03",105,128);
	}
	if(!countitem(1555) >= 1 || countitem(502) >= 1){
	switch(rand(1,2)){
		case 1:
		getitem 1555,1;
		break;
		case 2:
		getitem 502,1;
		break;
	}
	}
}

/*yuno_in03,102,114,6	script	Grim�rio de Veneno	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Voc� j� recebeu seu Grim�rio, fale com o Wizard!";
		close2;
		warp("yuno_in03",105,128);
	}
	if(!countitem(1555) >= 1 || countitem(502) >= 1){
	switch(rand(1,2)){
		case 1:
		getitem 1555,1;
		break;
		case 2:
		getitem 502,1;
		break;
	}
	}
}*/
/*yuno_in03,98,127,6	script	Grim�rio de Algod�o	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Voc� j� recebeu seu Grim�rio, fale com o Wizard!";
		close2;
		warp("yuno_in03",105,128);
	}
	if(!countitem(1555) >= 1 || countitem(502) >= 1){
	switch(rand(1,2)){
		case 1:
		getitem 1555,1;
		break;
		case 2:
		getitem 502,1;
		break;
	}
	}
}*/
	yuno_in03,107,125,6	script	Grim�rio Antimagico	2897,{
	if(countitem(1573) >= 1 || countitem(502) >= 1){
			mes "Voc� j� recebeu seu Grim�rio, fale com o Wizard!";
			close2;
			warp("yuno_in03",105,128);
		}
		if(!countitem(1573) >= 1 || countitem(502) >= 1){
		switch(rand(1,2)){
			case 1:
			getitem 1573,1;
			break;
			case 2:
			getitem 502,1;
			break;
		}
		}
	}
yuno_in03,105,130,4	script	Anci�o	412,{
	atcommand "@job 1";
	atcommand "@jlvl 9";
	mes "[Anci�o]";
	mes "Parab�ns " +strcharinfo(0)+ " voc� conseguiu seu pr�prio Grim�rio!";
	next;
	mes "[Anci�o]";
	mes "Agora voc� poder� se aventurar pelo mundo e evoluir com o seu Grim�rio.";
	mes "Lembrando que quando voc� completar 15 anos poder� se alistar no exame para Cavaleiros Magicos.";
	next;
	mes "[Anci�o]";
	mes "Em sua cidade junte suprimentos e parta para a sua pr�pria aventura, mas n�o se esque�a, fa�a muitos amigos";
	next;
	warp("hugel",92,151);
	end;
}

/*hugel,93,151,3	script	Padre	47,{
	atcommand "@snow";
	mes	"[Padre]";
	mes	"Ah!";
	next;
	mes "[Padre]";
	mes "Voc� est� ai, " + strcharinfo(0) + ".";
	next;
	mes "[Padre]";
	mes "Estou preocupado com Yuno."; 
	next;
	mes "[Padre]";
	mes "Pedi que ele fosse at� o Prefeito para lhe entregar uma carta importante, mas ele ainda n�o retornou.";
	next;
	mes "[Padre]";
	mes "Ah! N�o!";
	next;
	mes "[Padre]";
	mes "Se j� n�o bastasse Yuno, agora Asta tamb�m sumiu.";
	next;
	mes "[Padre]";
	mes "Se voc� poder me ajudar, te darei 10x " + getitemname(633) + ".";
	mes "Eu sei que n�o � muito, mas como voc� est� partindo para � Capital Real, poder� lhe ser �til no caminho.";
	next;
	mes "[Padre]";
	mes "Se aceitar me ajudar...";
	mes "A casa do Prefeito fica no ponto 1/3 do mapa...";
	next;
	mes "[Padre]";
	mes "Voc� aceita me ajudar?";
	next;
	mes "[Padre]";
	mes "Voc� pode me trazer aqueles dois em seguran�a ?";
	next;
	switch(select("Sim","N�o")){
		case 1: 
			if(countitem(2528)>=1){
				mes "[Padre]";
				mes "Obrigado por traze-los em seguran�a para casa...";
				next;
				mes "[Padre]";
				mes "E como agradecimento...";
				getitem 633,10;
				skilleffect  34 , 0 ; sc_start  SC_BLESSING , 360000 , 10 ;
				skilleffect  29 , 0 ; sc_start  SC_INCREASEAGI , 360000 , 10 ;
				next;
				mes "[Padre]";
				mes "Uma �tima viagem.";
				next;
				warp "hugel",86,230;
				close;
			}
		case 2:
		mes "[Padre]";
		mes "S� nos resta rezar para Deus...";
		next; 
		close;

	}
}
*/
hugel,53,106,3	script	Prefeito	901,{
	
	mes "[Prefeito]";
	mes "Ol�, " + strcharinfo(0) + " .";
	next;
	mes "[Prefeito]";
	mes "Aquele rapazinho chegou em casa com seguran�a?";
	next;
	mes "[Prefeito]";
	mes "Eu fiquei preocupado...";
	next;
	mes "[Prefeito]";
	mes "Falei para ele ir correndo para casa, pois estava nevando forte...";
	next;
	mes "[Prefeito]";
	mes "Foi ent�o que ele disse:"; 
	next;
	mes "[Yuno]";
	mes "- Fique tranquilo Prefeito, pelo Sul eu chegarei � Igreja bem r�pido!";
	close;

}
hugel,97,66,3	script	Asta	944,{
	mes "[Asta]";
	mes "LADR�O!";
	next;
	mes "[Asta]";
	mes "DEVOLVA O COLAR DO YUNO!";
	next;
	mes "[Asta]";
	mes "AAAAAAAAA! CABE�ADA...";
	next;
	mes "[Asta]";
	atcommand "@effect 3";
	mes "AN?  VOC� VEIO NOS AJUDAR?";
	next;
	mes "[Asta]";
	mes "ENT�O VOC� SER� MEU ASSISTENTE!";
	next;
	mes "[Asta]";
	mes "POR FAVOR, ESSE COLAR � MUITO IMPORTANTE PARA O YUNO!";
	next;
	close;
	
}
hugel,96,68,3	script	Yuno	975,{
	mes "[Yuno]";
	mes "Sniff...";
	next;
	mes "[Yuno]";
	mes "Meu colar...";
	next;
	mes "[Yuno]";
	mes "Mo�o voc� vai ajudar o Asta ?";
	next;
	mes "[Yuno]";
	mes "A gente � muito pobre e, n�o tem muito a te oferecer...";
	next;
	mes "[Yuno]";
	mes "Mas tenho esse " + getitemname(2528) +" quentinho para te dar...";
	next;
	mes "[Yuno]";
	mes "Voc� aceita nos ajudar ?";
	next;
	if(select("Sim","N�o")==2){
		next;
		mes "Tudo bem..";
		next;
		mes "Sniff...";
		close;
	}
	if(countitem(2623)>= 1){
		mes "[Yuno]";
		mes "Obrigado por nos ajudar.";
		next;
		mes "[Yuno]";
		mes "Aqui est� nosso agradecimento.";
		next;
		getitem 2528,1;
		delitem 2623,1;
		atcommand "@effect 218";
		next;
		mes "[Yuno]";
		mes "Eu tamb�m quero me tornar o Mago Imperador, n�o quero ver mais ningu�m sofrer e, nunca mais irei chorar de novo.";
		next;
		cutin "aaaaa.bmp",3;
		mes "[Asta & Yuno]";
		mes "Ent�o est� decidido!";
		next;
		mes "[Asta & Yuno]";
		mes "N�s dois lutaremos pelo titulo de Mago Imperador!";
		next;
		close;
	}
	mes "[Yuno]";
	mes "Ops! voc� n�o ajudou o Asta!";
	close;
	
}
hugel,95,56,2	script	Ladr�o	83,{
	if(countitem(921) == 0){
	mes "[Ladr�o]";
	mes "O que voc� quer pirralho maldito ?";
	next;
	mes "[Ladr�o]";
	mes "O QUE?";
	next;
	mes "[Ladr�o]";
	mes "DEVOLVER O COLAR ?";
	next;
	mes "[Ladr�o]";
	mes "ME OBRIGUE LIXO!";
	next;
	mes "[Ladr�o]";
	mes "SE N�O GOSTOU VENHA PEGA-LO!";
	next;
	mes "[Informativo]";
	mes "Seja valente e leve 10 " + getitemname(921) + " at� o ladr�o para provar que eliminou sua magia.";
	mes "[Ladr�o]";
	next;
	mes "MAGIA DE CRIA��O DE FUNGO: STORM OF SPORE!";
	atcommand "@monster 1014 10";
	next;
	close;
	}
	if(countitem(921) >= 10) {
		delitem 921,10;
		getitem 2623,1;
	mes "[Ladr�o}";
	mes "Que saco...";
	next;
	mes "[Ladr�o]";
	mes "Fique com isso de uma vez...";
	close;
	}
}

hugel,119,156,3	script	Resetador	69,{
	
	atcommand "@reset";
	close;
	
}
hugel,70,145,3	script	Bispo	60,{

	atcommand "@heal";

}
prontera,157,185,3	script	Anunciador	60,{
	
	if(countitem(23277) == 1) { setmadogear;}


	
}