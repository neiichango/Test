//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'www.google.com'", "snapshot=Action_1.inf");
	truclient_step("3", "Type flower in Search combobox", "snapshot=Action_3.inf");
	truclient_step("4", "Press Enter key on Search combobox", "snapshot=Action_4.inf");
	truclient_step("6", "Click on Images link", "snapshot=Action_6.inf");
	truclient_step("8", "Click on Google image", "snapshot=Action_8.inf");
	truclient_step("10", "search (1)", "snapshot=Action_10.inf");
	{
		truclient_step("10.1", "Click on Search combobox", "snapshot=Action_10.1.inf");
		truclient_step("10.2", "Type food in Search combobox", "snapshot=Action_10.2.inf");
		truclient_step("10.3", "Press Enter key on Search combobox", "snapshot=Action_10.3.inf");
	}
	truclient_step("11", "Mouse Over", "snapshot=Action_11.inf");
	{
		truclient_step("11.4", "Move mouse over element (3)", "snapshot=Action_11.4.inf");
	}
	truclient_step("12", "Click on Images link", "snapshot=Action_12.inf");

	return 0;
}
