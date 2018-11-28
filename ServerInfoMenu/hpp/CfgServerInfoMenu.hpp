class CfgServerInfoMenu
{
   antiHACK = "infiSTAR + BattlEye";
   hostedBy = "Host";
   ipPort = "Server IP";
   openKey = "User7"; // https://community.bistudio.com/wiki/inputAction/actions
   restart = 3; // Amount of hours before server automatically restarts
   serverName = "EXILE Server";
   class menuItems
   {
      class first
      {
         menuName = "Welcome";
         title = "WELCOME";
         content[] = {
            "Text<br />",
			"<br />",
			"Text"
         };
      };
      class second
      {
         menuName = "Rules";
         title = "SERVER RULES";
         content[] = {
			"<t size='1.25'>Any of the following violations can result in a kick and/or ban.</t>",
			"<br />",
			"<t size='1.5'>Rules</t>"
         };
      };
      class third
      {
         menuName = "HINTS";
         title = "HINTS";
         content[] = {
			"<t size='1.15'>Use these keys throughout the server at any time</t>",
			"<br />",
			"<t size='1'>XM8: 6</t>",
            "<br />",
            "<t size='1'>Lower Sound: 5</t>",
			"<br />",
            "<t size='1'>Holster/Unholster Weapon: 4</t>",
			"<br />",
            "<t size='1'>Lock/Unlock HotKey: Use Action 1</t>",
			"<br />",
            "<t size='1'>3D Group Marker HotKey: Use Action 2</t>"
		 };
      };
      class fourth
      {
         menuName = "Scripts";
         title = "INSTALLED SCRIPTS";
         content[] = {
            "<t size='1.25'>Script</t> Description",
            "<br />",
            "<t size='1.25'>Script</t> Description"
		 };
      };
      class fifth
      {
         menuName = "Communication";
         title = "VOICE SERVER AND WEBSITE";
         content[] = {
            "<t size='1.25'>Voice:  </t>Link",
            "<br />",
            "<t size='1.25'>Website:  </t>Link"
         };
      };
      class sixth
      {
         menuName = "Admins";
         title = "ADMINISTRATORS";
         content[] = {
            "<t size='1.25'>Player:</t> Admin",
            "<br />",
            "<t size='1.25'>Player:</t> Mod"
         };
      };
   };
};
