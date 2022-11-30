# -*- coding: utf-8 -*-
"""
OpenData資料擷取與應用
XML格式
"""
od_url="http://opendata.epa.gov.tw/ws/Data/REWXQA/?$orderby=SiteName&$skip=0&$top=1000&format=xml"

import urllib.request as ur

with ur.urlopen(od_url) as response:
    get_xml=response.read()

from bs4 import BeautifulSoup

data= BeautifulSoup(grt_xml,'xml')
SiteName=data.find_all('SiteName')
County=data.find_all('County')
Status=data.find_all('Status')
pm25=data.find_all('PM2.5')
PublishTime=data.find_all('PublishTime')

csv_str=""
for i in range(0,len(SiteName)):
    csv_str += "{},{},{},{},{}\n".\
                format(SiteName[i].get_text(),\
                       County[i].get_text(),\
                             pm25[i].get_text(),\
                             Status[i].get_text(),\
                                    PublishTime[i].get_text()) 

with open("pm_xml.csv","w") as f:
    story=f.write(csv_str)     #寫入檔案 

print("完成") 