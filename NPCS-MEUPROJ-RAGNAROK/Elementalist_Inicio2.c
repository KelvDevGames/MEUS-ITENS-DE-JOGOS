1@dth2,324,104,5	script	Hamaru Nyn	100,{
	
	if ( escolheu_ele_agua == 0 && escolheu_ele_vento == 0 && escolheu_ele_terra == 0 && escolheu_ele_fogo == 0 ) {
		mes .@NpcName$;
		mes "O que voc� quer?";
		next;
		mes .@NpcName$;
		mes "Deixe-me comer em paz...";
		close;
	}
	if ( maestria_adaga == 1 || maestria_arco == 1 || maestria_espada == 1 || maestria_punho == 1) {
		warp "prontera",185,175;
		end;	
	}	
		
		//-----------------------------------\\
		
		
		set .@NpcName$, "[^380B61Hamaru Nyn^000000]";
		skill "NV_BASIC",9,SKILL_PERM;
		mes .@NpcName$;
		cutin "Hamaru_biscoito.bmp",2;
		mes "Estes Biscoitos que ganhei de^380B61Hijima^000000 est�o deliciosos...";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Ele estava muito estranho hoje.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		cutin "Hamaru_cara2.bmp",2;
		mes "Geralmente ele s� me d� algo quando quer algo em t...";
		next;
		
		//-----------------------------------\\

		cutin "Hamaru_cara1.bmp",2;
		mes .@NpcName$;
		mes "Troca...";
		next;
		
		//-----------------------------------\\
		
		cutin "Hamaru_cara3.bmp",2;
		mes .@NpcName$;
		mes "Quem � voc� ?";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Voc� deve ser amigo de ^380B61Hijima^000000.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Sentindo o cheiro em sua volta...";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Voc� � do elemento " + elemento$ + ".";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Bom, meu nome � ^380B61Hamaru Nyn^000000.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Sou um dos estudiosos de ^FF0000Schwartzwald^000000.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "E j� que �s amigo de ^380B61Hijima^000000, falarei para voc� sobre duas coisas importantes.";
		atcommand "@useskill 358 1 " + strcharinfo(0);
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Primeiro: Linhagem Elemental.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Todo elemento possui uma �rvore de habilidade, onde at� mesmo elementos novos podem ser criados.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "A �rvore do elemento ^0B0B61�gua^000000: ";
		mes "->> ^0B0B61�gua^000000.";
		mes "->>> ^86B404Planta^000000.";
		mes "->>>> ^64FE2ECura^000000.";
		mes "->>>>> ^FA5858Sangue^000000.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "A �rvore do elemento ^964b00Terra^000000: ";
		mes "->> ^964b00Terra^000000.";
		mes "->>> ^610B0BLava^000000.";
		mes "->>>> ^6E6E6EMetal^000000.";
		mes "->>>>> ^964b00Areia^000000.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "A �rvore do elemento ^ff0000Fogo^000000: ";
		mes "->> ^ff0000Fogo^000000.";
		mes "->>> ^00aaffFogo Azul^000000.";
		mes "->>>> ^800000Combust�o^000000.";
		mes "->>>>> ^ffbf00Rel�mpago^000000.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "A �rvore do elemento ^00fc03Vento^000000: ";
		mes "->> ^00fc03Vento^000000.";
		mes "�nico elemento que faz o personagem levitar.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "A �rvore do elemento ^c0e31cEnergia^000000: ";
		mes "->> ^c0e31cEnergia^000000.";
		mes "Somente aquele que possui o dominio sobre os 4 elementos principais ter� controle sobre a natureza ^c0e31cEnergia^000000.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Te expliquei sobre as habilidades. ";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Agora irei te explicar sobre as Maestrias.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Voc� gostaria de ter outro estilo de luta ?";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Com as Maestrias isso � poss�vel...";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Atualmente temos 4 Maestrias: ";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "-> Maestria com Espada.";
		mes "-> Maestria com Punho.";
		mes "-> Maestria com Adaga.";
		mes "-> Maestria com Arco.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Maestria com Espada:";
		mes "NM: 5";
		mes "N-1: [4 * Level]";
		mes "Aumenta o ATQ com Espadas.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Maestria com Punho:";
		mes "NM: 5";
		mes "N-1: [3 * Level]";
		mes "Aumenta o ATQ c/s soqueira.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Maestria com Adaga:";
		mes "NM: 5";
		mes "N-1: [5'%' * Level]";
		mes "H� chances de ativar um duplo ataque.";	
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Maestria com Arco:";
		mes "NM: 5";
		mes "N-1: [1 * Level]";
		mes "Ganho de alcance.";
		next;
		
		//-----------------------------------\\
		
		mes .@NpcName$;
		mes "Bom, j� te expliquei sobre as Maestrias...";
		next;
		
		//-----------------------------------\\
		
		
		mes .@NpcName$;
		mes "Qual Maestria voc� ir� escolher ?";
		next;
		switch(select("- Espada","- Punho","- Adagas","- Arco","- NV.Maestria")) { 
		case 1:
			skill "SM_TWOHAND",1,SKILL_PERM;
			set maestria_espada,1;
			espada++;
			
	
			mes .@NpcName$;
			mes "Muito bem � aqui onde n�s nos despedimos.";
			next;
			mes .@NpcName$;
			mes "Fa�a muitas aventuras e fique mais forte a cada dia.";
			next;
			mes .@NpcName$;
			mes "Prepare-se...";
			next;
			mes .@NpcName$;
			mes "�gua que �s pura, �gua que �s clara...";
			next;
			mes .@NpcName$;
			mes "�gua que tudo leva, �gua que tudo para...";
			atcommand "@effect 825";
			next;
			warp "prt_fild08",148,339;
			next;
			cutin "",255;
			close;
		case 2:
			skill "MO_IRONHAND",1,SKILL_PERM;
			set maestria_punho,1;
			punho++;
			

			mes .@NpcName$;
			mes "Muito bem � aqui onde n�s nos despedimos.";
			next;
			mes .@NpcName$;
			mes "Fa�a muitas aventuras e fique mais forte a cada dia.";
			next;
			mes .@NpcName$;
			mes "Prepare-se...";
			next;
			mes .@NpcName$;
			mes "�gua que �s pura, �gua que �s clara...";
			next;
			mes .@NpcName$;
			mes "�gua que tudo leva, �gua que tudo para...";
			atcommand "@effect 825";
			next;
			warp "prt_fild08",148,339;
			next;
			cutin "",255;
			close;
		case 3:
			skill "TF_DOUBLE",1,SKILL_PERM;
			set maestria_adaga,1;			
			adaga++;
			

			mes .@NpcName$;
			mes "Muito bem � aqui onde n�s nos despedimos.";
			next;
			mes .@NpcName$;
			mes "Fa�a muitas aventuras e fique mais forte a cada dia.";
			next;
			mes .@NpcName$;
			mes "Prepare-se...";
			next;
			mes .@NpcName$;
			mes "�gua que �s pura, �gua que �s clara...";
			next;
			mes .@NpcName$;
			mes "�gua que tudo leva, �gua que tudo para...";
			atcommand "@effect 825";
			next;
			warp "prt_fild08",148,339;
			next;
			cutin "",255;
			close;
		case 4:
			skill "AC_VULTURE",1,SKILL_PERM;
			set maestria_arco,1;
			arco++;
			

			mes .@NpcName$;
			mes "Muito bem � aqui onde n�s nos despedimos.";
			next;
			mes .@NpcName$;
			mes "Fa�a muitas aventuras e fique mais forte a cada dia.";
			next;
			mes .@NpcName$;
			mes "Prepare-se...";
			next;
			mes .@NpcName$;
			mes "�gua que �s pura, �gua que �s clara...";
			next;
			mes .@NpcName$;
			mes "�gua que tudo leva, �gua que tudo para...";
			atcommand "@effect 825";
			next;
			warp "prt_fild08",148,339;
			next;
			cutin "",255;
			close;
		default:
			if (maestria_espada == 1) {
				mes "Atualmente sua Maestria com Espada est� no n�vel: " + espada;
				close;
			} else if (maestria_punho == 1) {
				mes "Atualmente sua Maestria com Punho est� no n�vel: " + punho;
				close;
			} else if (maestria_adaga == 1) {
				mes "Atualmente sua Maestria com Adaga est� no n�vel: " + adaga;
				close;
			} else if (maestria_arco == 1) {
				mes "Atualmente sua Maestria com Arco est� no n�vel: " + arco;
				close;
			} else {
				mes "Que pena voc� ainda n�o possui uma Maestria...";
				close;
			}
		}
		

	
}