package;

import flixel.FlxG;
import flixel.FlxState;
import haxe.Json;
import sys.io.File;

class App {

    public static var defaultMinawans:Dynamic = 0;
	public static var thisVer = "0.0.1";

	// States System
	public static var sillyStates = new Array<Dynamic>();
	public static var curState = 0;




	public static var coreLoaded = false;

    public static function initCore() {
		getMinaData();
		getStates();
    }

	public static function getMinaData()
	{
		var dataFile = File.getContent("assets/data/data.json");

		var json = Json.parse(dataFile);


        defaultMinawans = json.maxLimit;
		trace("Data Loaded!");
		coreLoaded = true;
	}
	public static function getStates()
	{
		var statesData = File.getContent("mod/states/states.json");

		var json = Json.parse(statesData);

		var states:Array<Dynamic> = json.states;
		for (state in states)
		{
			trace("Pushing state: " + state);
			sillyStates.push(state + ".hxc");
			trace("Successfully pushed" + state);
		}

		trace("All states loaded!");
	}

	public static function updateStateSelection(huh)
	{

		curState += huh;

		if (curState > sillyStates.length - 1)
		{
			curState = 0;
		}
		else if (curState < 0)
		{
			curState = sillyStates.length - 1;
		}

		trace("State selection updated! WAN WAN");
	}

}