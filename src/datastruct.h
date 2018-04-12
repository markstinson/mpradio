#pragma once

/** setting datastructure */

struct settings{
	string freq;
	string storage;
	string format;
	string btGain;
	string storageGain;
	string output;
	bool shuffle;
	bool persistentPlaylist;
	bool resumePlayback;
	bool btBoost;
	int rdsUpdateInterval;
	int rdsCharsJump;
};

struct playbackStatus{
	string songPath;
	string songName;
	string songArtist;
	string songAlbum;
	string songYear;
	int songIndex=0;
	int playbackPosition=0;
	bool resumed=false;
};
