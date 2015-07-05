		
// character
		itemDef
		{
			visible			1
			origin			366 160
			forecolor		1 1 1 1
			exp				text( tableLookup(CHARACTER_TABLE, 0, dvarInt("drui_character")+1, 6) )
			textfont		UI_FONT_NORMAL
			textalign		ITEM_ALIGN_CENTER
			textscale		0.3
			decoration
		}
		itemDef 
		{
			// 570 - 330 = 240
			rect			330 165 74 74
			style			WINDOW_STYLE_SHADER
			exp				material( tableLookup(CHARACTER_TABLE, 0, dvarInt("drui_character")+1, 3) )
			border			3
			bordercolor		.4 .4 .4 .8
			forecolor		1 1 1 1
			visible			1
			decoration
		}

		// spray0
		itemDef
		{
			visible			1
			origin			515 160
			forecolor		1 1 1 1
			text			"Spray"
			textfont		UI_FONT_NORMAL
			textalign		ITEM_ALIGN_CENTER
			textscale		0.3
			decoration
		}
		itemDef 
		{	
			rect			(330+156) (115+55) 64 64
			style			WINDOW_STYLE_SHADER
			exp				material( tableLookup(SPRAY_TABLE, 0, dvarInt("drui_spray")+1, 3) )
			forecolor		1 1 1 1
			visible			1
			decoration
		}


// weapon
		itemDef 
		{
			rect			400 303 100 100
			style			WINDOW_STYLE_FILLED
			forecolor		1 1 1 1
			backcolor		0 0 0 0.5
			visible			1
			decoration
		}

		itemDef 
		{
			rect			405 170 84 68
			style			WINDOW_STYLE_SHADER
			exp				material( tableLookup(ITEM_TABLE, 0, dvarInt("drui_weapon")+1, 3) )
			forecolor		1 1 1 1
			visible			1
			decoration
		}

		itemDef 
		{ 
			style		WINDOW_STYLE_FILLED 
			rect		575 125 0 0 DR_BUTTON_ALIGN 
			forecolor	0.9 0.9 0.9 1.0
			exp			text( tableLookup(ITEM_TABLE, 0, dvarInt("drui_weapon")+1, 5) ) 
			type		ITEM_TYPE_BUTTON 
			textfont	UI_FONT_NORMAL 
			textalign	ITEM_ALIGN_CENTER 
			textscale	0.3 
			textalignx	70 
			textaligny	35
			visible		1
		}
		
// ability
		itemDef 
		{
			rect			330 (305+48+10) 220 48
			style			WINDOW_STYLE_FILLED
			border			1
			bordercolor		.6 .6 .6 .5
			forecolor		1 1 1 1
			backcolor		0 0 0 0.5
			visible			1
			decoration
		}

		itemDef 
		{
			rect			335 (305+48+10) 64 48
			style			WINDOW_STYLE_SHADER
			exp				material( tableLookup(ABILITY_TABLE, 0, dvarInt("drui_ability")+1, 4) )
			forecolor		1 1 1 1
			visible			1
			decoration
		}

		itemDef 
		{ 
			style		WINDOW_STYLE_FILLED 
			rect		335 (305+48+10) 0 0 DR_BUTTON_ALIGN 
			forecolor	0.9 0.9 0.9 1.0
			exp			text( tableLookup(ABILITY_TABLE, 0, dvarInt("drui_ability")+1, 5) ) 
			type		ITEM_TYPE_BUTTON 
			textfont	UI_FONT_NORMAL 
			textstyle	ITEM_TEXTSTYLE_SHADOWED 
			textalign	ITEM_ALIGN_LEFT 
			textscale	0.38 
			textalignx	70 
			textaligny	35
			visible		1
		}


