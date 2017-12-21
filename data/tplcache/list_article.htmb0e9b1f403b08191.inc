<?php
$z[0]=Array("field","",254,273);
$z[0][4]['name']="title";
$z[1]=Array("global","",274,300);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",341,370);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",410,468);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1138,1173);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1574,1603);
$z[5][4]['name']="position";
$z[6]=Array("channel"," <a href=\"[field:typeurl/]\" title=\"[field:typename/]\">[field:typename/]</a> ",1727,1910);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<a href='~typelink~' class='hover'>~typename~</a>";
$z[7]=Array("list","\r\n      <div class=\"fl n1\"> <a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" onerror=\"this.src='images/nopic.gif';\" width=\"291\" height=\"218\" title=\"[field:title/]\" alt=\"[field:title/]\"/></a>\r\n        <div class=\"n_1\">\r\n          <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n          <div class=\"date\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</div>\r\n          <div class=\"contents\">[field:description function='cn_substr(@me,100)'/]...</div>\r\n        </div>\r\n        <div class=\"clear\"></div>\r\n      </div>\r\n      ",2001,2619);
$z[7][4]['pagesize']="2";
$z[8]=Array("arclist","\r\n      <li class=\"li_1\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a><span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></li>\r\n      ",2733,2963);
$z[8][4]['limit']="2,2";
$z[8][4]['titlelen']="32";
$z[8][4]['typeid']="10";
$z[9]=Array("include","",3076,3113);
$z[9][4]['filename']="footer.htm";

?>