
		// background
		itemDef 
		{
			//rect			80 90 480 360
			rect			80 30 480 420
			style			WINDOW_STYLE_SHADER
			background		"background"
			border			1
			//bordercolor		0 0 0 1
			bordercolor		0 0.600 1 1
			visible			1
			decoration
		}
		// header
		itemDef 
		{
			//rect			81 30 478 60
			rect			83 32 477 70
			style			WINDOW_STYLE_SHADER
			background		"uidr_header"
			visible			1
			decoration
		}
		itemDef
		{
			visible			1 //when( !menuisopen( "team_select" ) )
			origin			510 68
			forecolor		1 1 1 1
			exp				text( dvarString( "name" ) )
			textfont		UI_FONT_NORMAL
			textalign		ITEM_ALIGN_RIGHT
			textscale		0.4
			decoration
		}

		// menu name
		itemDef
		{
			visible			1 //when( !menuisopen( "team_select" ) )
			origin			90 80
			forecolor		1 1 1 1
			exp				text( dvarString( "menuName" ) )
			textfont		UI_FONT_NORMAL
			textalign		ITEM_ALIGN_LEFT
			textscale		0.8
			decoration
		}

		// rank icon
		itemDef 
		{
			rect			/*528 44*/ 518 37 32 32
			style			WINDOW_STYLE_SHADER
			exp				material( tablelookup( "mp/rankIconTable.csv", 0, stat(252), stat(2326)+1 ) )
			//background		"uidr_header"
			visible			1
			decoration
		}

		// rank name
		itemDef
		{
			visible			1
			origin			550 82
			forecolor		0.95 0.95 0.95 1
			exp				text( "@"+tablelookup("mp/ranktable.csv",0,stat(252)+1,5) )
			textfont		UI_FONT_NORMAL
			textalign		ITEM_ALIGN_RIGHT
			textscale		0.32
			decoration
		}
		itemDef
		{
			visible			1
			origin			520 445
			forecolor		1 1 1 1
			text			"Modified By ^1Crazy"
			textfont		UI_FONT_NORMAL
			textalign		ITEM_ALIGN_RIGHT
			textscale		0.20
			decoration
		}

