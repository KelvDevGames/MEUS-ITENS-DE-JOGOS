//----------------------------------------------------------------------//
//-----------------DEV.KEL.INICIO.GAME-ELEMENTALIST--------------------//
//--------------------------------------------------------------------//
1@dth2,252,112,3	script	Informações	836,{
	
mes "Para melhor interação com o modo história, aperte [F11] do seu teclado até as janelas desaparecerem.";
next;
mes "Siga a ponte até Hijima...";
close;

OnInit:
Waitingroom "[Informações]",0;
}
//-------------------------------------------------------------------//
1@dth2,273,106,3	script	Hijima Shouko	623,{

if ( escolheu_ele_agua == 0 && escolheu_ele_vento == 0 && escolheu_ele_terra == 0 && escolheu_ele_fogo == 0 ) {
	
	set .@NpcName$,"[^380B61Hijima Shouko^000000]";
	
	cutin "hijima_serio.bmp",2;
	mes .@NpcName$;
	mes "Olá, " + strcharinfo(0) + ".";
	skill "NV_BASIC",9,SKILL_PERM;
	atcommand "@allstats 9";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$; //nome do npc
	mes "Você está perdido ?";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "Já que está perdido, não há nenhum problema ouvir uma ótima história.";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "Não é mesmo?";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "Então, vamos lá...";
	atcommand "@useskill 358 1 " + strcharinfo(0);
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "Numa era onde magia era tudo, a humanidade dividiu-se em quatro nações potentes: ";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "--------------------------";
	mes "- Rune-Midgard.";
	mes "- Schwartzwald.";
	mes "- Arunafeltz.";
	mes "- Região Esquecida.";
	mes "--------------------------";
	next;

	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "E cada uma dessas 4 nações dominavam um tipo de elemento da Natureza.";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "E eram o que conhecemos hoje como Elementalistas.";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "^00FF00Rune-Midgard: Dominavam o Vento^000000.";
	mes "^FF0000Schwartzwald: Dominavam o Fogo^000000.";
	mes "^0000FFArunafeltz: Dominavam a Água.^000000";
	mes "^8A2908R.Esquecida: Dominavam a Terra.^000000";
	next;
	
	//-----------------------------------\\
	
	cutin "ele_lindo.bmp",4;
	mes .@NpcName$;
	mes "Todos os reinos viviam em paz, até que o reino ^FF0000Schwartzwald^000000 desafiou os demais reinos em busca de controlar e escravizar todo os outros.";
	next;
	cutin "ele_seca",4;
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "Traçando uma guerra elemental e sanguínea por milênios...";
	next;

	
	//-----------------------------------\\
	
	cutin "hijima_serio",2;
	mes .@NpcName$;
	mes "Muito se perdeu com essa guerra, elementalistas se esconderam para preservar sua linhagem.";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "O reino ^FF0000Schwartzwald^000000 conquistou o continente com seu poderio devastador e incansável. Mas volta e meia era desafiado por algum clã que tentava retomar a paz.";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "Meus ancestrais falavam que quando aquele que domina os 4 elementos viesse a nascer um novo destino seria traçado...";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "Seja para trazer a destruição ou para trazer o amor...";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "A história acabou... Incrível, né?";  
	next;
	mes .@NpcName$;
	mes "Mas Deixa eu lhe perguntar...";
	next;
	
	//-----------------------------------\\
	
	mes .@NpcName$;
	mes "Qual é o seu elemento dominante ?";
	next;
	switch(select("- Fogo", "- Água", "- Terra","- Vento")) {
		case 1:
			atcommand "@effect 840";
			set escolheu_ele_fogo,1;
			set elemento$, "Fogo";
			cutin "hijima_surpreso.bmp",2;
			next;
			cutin "hijima_sorrindo.bmp",2;
			mes .@NpcName$;
			mes "Pensamentos...";
			next;
			mes .@NpcName$;
			mes "Ele parece promissor...";
			next;
			mes .@NpcName$;
			mes "Siga pela ponte ->";
			next;
			mes .@NpcName$;
			mes "Alguém vai lhe ensinar sobre os Elementos & Maestrias de nosso mundo.";
			next;
			mes .@NpcName$;
			mes "Venha me visitar um dia se possível e boa sorte!";
			cutin "",255;
			close;
			
		case 2:
			atcommand "@effect 845";
			set escolheu_ele_agua,1;
			set elemento$, "Água";
			cutin "hijima_surpreso.bmp",2;
			next;
			cutin "hijima_sorrindo.bmp",2;
			mes .@NpcName$;
			mes "Pensamentos...";
			next;
			mes .@NpcName$;
			mes "Ele parece promissor...";
			next;
			mes .@NpcName$;
			mes "Siga pela ponte ->";
			next;
			mes .@NpcName$;
			mes "Alguém vai lhe ensinar sobre os Elementos & Maestrias de nosso mundo.";
			next;
			mes .@NpcName$;
			mes "Venha me visitar um dia se possível e boa sorte!";
			cutin "",255;
			close;
			
		case 3:
			atcommand "@effect 842";
			set escolheu_ele_terra,1;
			set elemento$, "Terra";
			cutin "hijima_surpreso.bmp",2;
			next;
			cutin "hijima_sorrindo.bmp",2;
			mes .@NpcName$;
			mes "Pensamentos...";
			next;
			mes .@NpcName$;
			mes "Ele parece promissor...";
			next;
			mes .@NpcName$;
			mes "Siga pela ponte ->";
			next;
			mes .@NpcName$;
			mes "Alguém vai lhe ensinar sobre os Elementos & Maestrias de nosso mundo.";
			next;
			mes .@NpcName$;
			mes "Venha me visitar um dia se possível e boa sorte!";
			cutin "",255;
			close;
			
		default:
			atcommand "@effect 843";
			set escolheu_ele_vento,1;
			set elemento$, "Vento";
			cutin "hijima_surpreso.bmp",2;
			next;
			cutin "hijima_sorrindo.bmp",2;
			mes .@NpcName$;
			mes "Pensamentos...";
			next;
			mes .@NpcName$;
			mes "Ele parece promissor...";
			next;
			mes .@NpcName$;
			mes "Siga pela ponte ->";
			next;
			mes .@NpcName$;
			mes "Alguém vai lhe ensinar sobre os Elementos & Maestrias de nosso mundo.";
			next;
			mes .@NpcName$;
			mes "Venha me visitar um dia se possível e boa sorte!";
			next;
			cutin "",255;
			next;
			close;
	}
}//FIM DO IF QUE TESTA SE O PLAYER JÁ TEM UM ELEMENTO.
	mes .@NpcName$;
	mes "Você já domina o elemento: " + elemento$ + ".";
	next;
	mes .@NpcName$;
	mes "Siga em frente.";
	close;
}