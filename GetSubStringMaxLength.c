Class Solution{
	int GetSubStringMaxLength(string s){
	   vector<int> dict[256, -1];       //define vector for the char's strart pos , default -1
	   int maxLen = 0,start = -1;                   //current char's start
	   for(int i = 0; i < s.length() ; i++){    //traverse the string and get the start of the char
          if(dict[s[i]] > start)    //if default start < current start
              start = dict[s[i]];
           dict[s[i]] = i;           //modify the start of s[i]
           maxLen  = max(maxLen, i - start);      //ompare the maxLen of before with the substring of the current char
	   }
	   return maxLen;
	}
	   
};
