yuno_in02,88,64,3	script	Sword Smith	63,{
	
	if(countitem(2683) >= 1 || countitem(2682) >= 1 || countitem(2684) >= 1 || countitem(2685) >= 1 || countitem(2936) >= 1 || countitem(2703) >= 1 || countitem(2677) >= 1 || countitem(2678) >= 1) {
		mes "[Sword Smith]";
		mes "Você já tem um item...";
		next;
		mes "[Sword Smith]";
		mes "Avance para o próximo nível.";
		close;
	}
	mes "[Sword Smith]";
	mes "Olá, " +strcharinfo(0)+".";
	next;
	mes "[Sword Smith]";
	mes "Eu tenho alguns itens interessantes aqui, deseja dar uma olhada?";
	next;
	if(select("Sim","Não")==2){
		
		mes "[Sword Smith]";
		mes "Tudo bem, estarei aqui caso mude de ideia.";
		close;	
	}
	mes "[Sword Smith]";
	mes "Bem, estes são os itens que tenho...";
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
		mes "Vi monstros na direção - [OESTE]";
		next;
		mes "[Sword Smith]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","Não")==2){
			
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
			mes "Parabéns! Agora você está pronto para se tornar um Mago";
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
		mes "Vi monstros na direção - [OESTE]";
		next;
		mes "[Sword Smith]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","Não")==2){
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
			mes "Parabéns! Agora você está pronto para se tornar um Mago";
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
		mes "Vi monstros na direção - [OESTE]";
		next;
		mes "[Sword Smith]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","Não")==2){
			
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
			mes "Parabéns! Agora você está pronto para se tornar um Mago";
			close;	
		}
		break;
	}
		mes "[Sword Smith]";
		mes "Me desculpe, mas você não tem todos os itens necessários para esta quest.";
		next;
		mes "[Sword Smith]";
		mes "Volte quando você tiver todos os itens!";
		close;
	
}

yuno_in02,100,60,3	script	Wizard Nóx	64,{
	
	if(countitem(2683) >= 1 || 
	countitem(2682) >= 1 || 
	countitem(2684) >= 1 || 
	countitem(2685) >= 1 || 
	countitem(2936) >= 1 || 
	countitem(2703) >= 1 || countitem(2677) >= 1 || countitem(2678) >= 1)
	{
		mes "Ops! Você já fez essa quest...";
		mes "Avance para não ficar para trás...";
		close;
	}

	mes "[Nóx]";
	mes "Olá " +strcharinfo(0)+"!";
	mes "Eu tenho alguns itens interessantes aqui, deseja dar uma olhada?";
	next;
	if(select("Sim","Não")==2){
		
		mes "[Nóx]";
		mes "Tudo bem, estarei aqui caso mude de idéia.";
		close;	
	}
	mes "[Nóx]";
	mes "Bem, estes são os itens que eu tenho...";
	mes "Sobre qual deles vai querer saber mais?";
	next;
	switch(select("Anel do Fogo","Anel da Agua","Anel do Vento","Anel da Terra","Anel do Trovão")){
		case 1:
		mes "[Nóx]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2683);
		next;
		mes "Em troca me traga...";
		mes "10x " + getitemname(507);
		next;
		mes "Há caso queira concluir, te darei uma dica...";
		next;
		mes "Vi plantas na direção - [LESTE]";
		next;
		mes "[Nóx]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","Não")==2){
			
			mes "[Nóx]";
			mes "Beless!";
			mes "Até mais tarde";
			close;
		}
		if(countitem(507) >= 10){
			
			delitem 507,10;
			getitem 2683,1;
			atcommand "@jlvl 10";
			atcommand "@effect 55";
			mes "[Nóx]";
			mes "Parabéns! Agora você está pronto para se tornar um Mago";
			close;	
		}
		break;
		case 2:
		mes "[Nóx]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2682);
		next;
		mes "Em troca me traga...";
		mes "10x " + getitemname(510);
		next;
		mes "Há caso queira concluir, te darei uma dica...";
		next;
		mes "Vi plantas na direção - [LESTE]";
		next;
		mes "[Nóx]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","Não")==2){
			
			mes "[Nóx]";
			mes "Beless";
			mes "Até mais tarde";
			close;
		}
		if(countitem(510) >= 10){
			
			delitem 510,10;
			getitem 2682,1;
			atcommand "@jlvl 10";
			atcommand "@effect 54";
			mes "[Nóx]";
			mes "Parabéns! Agora você está pronto para se tornar um Mago";
			close;	
		}
		break;
		case 3:
		mes "[Nóx]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2684);
		next;
		mes "Em troca me traga...";
		mes "10x " + getitemname(511);
		next;
		mes "Há caso queira concluir, te darei uma dica...";
		next;
		mes "Vi plantas na direção - [LESTE]";
		next;
		mes "[Nóx]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","Não")==2){
			
			mes "[Nóx]";
			mes "Beless";
			mes "Até mais tarde";
			close;
		}
		if(countitem(511) >= 10){
			
			delitem 511,10;
			getitem 2684,1;
			atcommand "@jlvl 10";
			atcommand "@effect 56";
			mes "[Nóx]";
			mes "Parabéns! Agora você está pronto para se tornar um Mago";
			close;	
		}
		break;
		case 4:
		mes "[Nóx]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2685);
		next;
		mes "Em troca me traga...";
		mes "10x " + getitemname(508);
		next;
		mes "Há caso queira concluir, te darei uma dica...";
		next;
		mes "Vi plantas na direção - [LESTE]";
		next;
		mes "[Nóx]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","Não")==2){
			
			mes "[Nóx]";
			mes "Beless";
			mes "Até mais tarde";
			close;
		}
		if(countitem(508) >= 10){
			
			delitem 508,10;
			getitem 2685,1;
			atcommand "@jlvl 10";
			atcommand "@effect 57";
			mes "[Nóx]";
			mes "Parabéns! Agora você está pronto para se tornar um Mago";
			close;	
		}
		break;
		case 5:
		mes "[Nóx]";
		mes "Recompensa: ";
		mes "1x " + getitemname(2936);
		next;
		mes "Em troca me traga...";
		mes "10x " + getitemname(509);
		next;
		mes "Há caso queira concluir, te darei uma dica...";
		next;
		mes "Vi plantas na direção - [LESTE]";
		next;
		mes "[Nóx]";
		mes "Deseja fazer esta quest?";
		next;
		if(select("Sim","Não")==2){
			
			mes "[Nóx]";
			mes "Beless";
			mes "Até mais tarde";
			close;
		}
		if(countitem(509) >= 10){
			
			delitem 509,10;
			getitem 2936,1;
			atcommand "@jlvl 10";
			atcommand "@effect 57";
			mes "[Nóx]";
			mes "Parabéns! Agora você está pronto para se tornar um Mago";
			close;	
		}
		break;	
	}
	mes "[Nóx]";
	mes "Me desculpe, mas você não tem todos os itens necessários para esta quest.";
	mes "Volte quando você tiver todos os itens!";
	close;

}

yuno_in03,109,122,6	script	Grimório das Chamas	2897,{
	if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Você já recebeu seu Grimório, fale com o Ancião!";
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
yuno_in03,109,118,6	script	Grimório das Almas	2897,{
if(countitem(1577) >= 1 || countitem(502) >= 1){
		mes "Você já recebeu seu Grimório, fale com o Wizard!";
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
yuno_in03,109,120,6	script	Grimório das Águas	2897,{
if(countitem(1553) >= 1 || countitem(502) >= 1){
		mes "Você já recebeu seu Grimório, fale com o Wizard!";
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
/*yuno_in03,98,119,6	script	Grimório da Terra	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Você já recebeu seu Grimório, fale com o Wizard!";
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
/*yuno_in03,98,116,6	script	Grimório do Vento	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Você já recebeu seu Grimório, fale com o Wizard!";
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
/*yuno_in03,98,123,6	script	Grimório do Trovão	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Você já recebeu seu Grimório, fale com o Wizard!";
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
yuno_in03,107,114,6	script	Grimório do Tempo	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Você já recebeu seu Grimório, fale com o Wizard!";
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

/*yuno_in03,102,114,6	script	Grimório de Veneno	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Você já recebeu seu Grimório, fale com o Wizard!";
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
/*yuno_in03,98,127,6	script	Grimório de Algodão	2897,{
if(countitem(1555) >= 1 || countitem(502) >= 1){
		mes "Você já recebeu seu Grimório, fale com o Wizard!";
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
	yuno_in03,107,125,6	script	Grimório Antimagico	2897,{
	if(countitem(1573) >= 1 || countitem(502) >= 1){
			mes "Você já recebeu seu Grimório, fale com o Wizard!";
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
yuno_in03,105,130,4	script	Ancião	412,{
	atcommand "@job 1";
	atcommand "@jlvl 9";
	mes "[Ancião]";
	mes "Parabéns " +strcharinfo(0)+ " você conseguiu seu próprio Grimório!";
	next;
	mes "[Ancião]";
	mes "Agora você poderá se aventurar pelo mundo e evoluir com o seu Grimório.";
	mes "Lembrando que quando você completar 15 anos poderá se alistar no exame para Cavaleiros Magicos.";
	next;
	mes "[Ancião]";
	mes "Em sua cidade junte suprimentos e parta para a sua própria aventura, mas não se esqueça, faça muitos amigos";
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
	mes "Você está ai, " + strcharinfo(0) + ".";
	next;
	mes "[Padre]";
	mes "Estou preocupado com Yuno."; 
	next;
	mes "[Padre]";
	mes "Pedi que ele fosse até o Prefeito para lhe entregar uma carta importante, mas ele ainda não retornou.";
	next;
	mes "[Padre]";
	mes "Ah! Não!";
	next;
	mes "[Padre]";
	mes "Se já não bastasse Yuno, agora Asta também sumiu.";
	next;
	mes "[Padre]";
	mes "Se você poder me ajudar, te darei 10x " + getitemname(633) + ".";
	mes "Eu sei que não é muito, mas como você está partindo para à Capital Real, poderá lhe ser útil no caminho.";
	next;
	mes "[Padre]";
	mes "Se aceitar me ajudar...";
	mes "A casa do Prefeito fica no ponto 1/3 do mapa...";
	next;
	mes "[Padre]";
	mes "Você aceita me ajudar?";
	next;
	mes "[Padre]";
	mes "Você pode me trazer aqueles dois em segurança ?";
	next;
	switch(select("Sim","Não")){
		case 1: 
			if(countitem(2528)>=1){
				mes "[Padre]";
				mes "Obrigado por traze-los em segurança para casa...";
				next;
				mes "[Padre]";
				mes "E como agradecimento...";
				getitem 633,10;
				skilleffect  34 , 0 ; sc_start  SC_BLESSING , 360000 , 10 ;
				skilleffect  29 , 0 ; sc_start  SC_INCREASEAGI , 360000 , 10 ;
				next;
				mes "[Padre]";
				mes "Uma ótima viagem.";
				next;
				warp "hugel",86,230;
				close;
			}
		case 2:
		mes "[Padre]";
		mes "Só nos resta rezar para Deus...";
		next; 
		close;

	}
}
*/
hugel,53,106,3	script	Prefeito	901,{
	
	mes "[Prefeito]";
	mes "Olá, " + strcharinfo(0) + " .";
	next;
	mes "[Prefeito]";
	mes "Aquele rapazinho chegou em casa com segurança?";
	next;
	mes "[Prefeito]";
	mes "Eu fiquei preocupado...";
	next;
	mes "[Prefeito]";
	mes "Falei para ele ir correndo para casa, pois estava nevando forte...";
	next;
	mes "[Prefeito]";
	mes "Foi então que ele disse:"; 
	next;
	mes "[Yuno]";
	mes "- Fique tranquilo Prefeito, pelo Sul eu chegarei à Igreja bem rápido!";
	close;

}
hugel,97,66,3	script	Asta	944,{
	mes "[Asta]";
	mes "LADRÃO!";
	next;
	mes "[Asta]";
	mes "DEVOLVA O COLAR DO YUNO!";
	next;
	mes "[Asta]";
	mes "AAAAAAAAA! CABEÇADA...";
	next;
	mes "[Asta]";
	atcommand "@effect 3";
	mes "AN?  VOCÊ VEIO NOS AJUDAR?";
	next;
	mes "[Asta]";
	mes "ENTÃO VOCÊ SERÁ MEU ASSISTENTE!";
	next;
	mes "[Asta]";
	mes "POR FAVOR, ESSE COLAR É MUITO IMPORTANTE PARA O YUNO!";
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
	mes "Moço você vai ajudar o Asta ?";
	next;
	mes "[Yuno]";
	mes "A gente é muito pobre e, não tem muito a te oferecer...";
	next;
	mes "[Yuno]";
	mes "Mas tenho esse " + getitemname(2528) +" quentinho para te dar...";
	next;
	mes "[Yuno]";
	mes "Você aceita nos ajudar ?";
	next;
	if(select("Sim","Não")==2){
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
		mes "Aqui está nosso agradecimento.";
		next;
		getitem 2528,1;
		delitem 2623,1;
		atcommand "@effect 218";
		next;
		mes "[Yuno]";
		mes "Eu também quero me tornar o Mago Imperador, não quero ver mais ninguém sofrer e, nunca mais irei chorar de novo.";
		next;
		cutin "aaaaa.bmp",3;
		mes "[Asta & Yuno]";
		mes "Então está decidido!";
		next;
		mes "[Asta & Yuno]";
		mes "Nós dois lutaremos pelo titulo de Mago Imperador!";
		next;
		close;
	}
	mes "[Yuno]";
	mes "Ops! você não ajudou o Asta!";
	close;
	
}
hugel,95,56,2	script	Ladrão	83,{
	if(countitem(921) == 0){
	mes "[Ladrão]";
	mes "O que você quer pirralho maldito ?";
	next;
	mes "[Ladrão]";
	mes "O QUE?";
	next;
	mes "[Ladrão]";
	mes "DEVOLVER O COLAR ?";
	next;
	mes "[Ladrão]";
	mes "ME OBRIGUE LIXO!";
	next;
	mes "[Ladrão]";
	mes "SE NÃO GOSTOU VENHA PEGA-LO!";
	next;
	mes "[Informativo]";
	mes "Seja valente e leve 10 " + getitemname(921) + " até o ladrão para provar que eliminou sua magia.";
	mes "[Ladrão]";
	next;
	mes "MAGIA DE CRIAÇÃO DE FUNGO: STORM OF SPORE!";
	atcommand "@monster 1014 10";
	next;
	close;
	}
	if(countitem(921) >= 10) {
		delitem 921,10;
		getitem 2623,1;
	mes "[Ladrão}";
	mes "Que saco...";
	next;
	mes "[Ladrão]";
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