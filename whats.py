from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import Select
from time import sleep

def by_xpath(xpath):
	element = browser.find_element_by_xpath(xpath)
	return element

browser = webdriver.Chrome()
sleep(1)
browser.get('https://web.whatsapp.com/')
sleep(15)

btn_group = by_xpath('//*[@id="pane-side"]/div[1]/div/div/div[15]/div/div/div[2]/div[1]/div[1]/span/span')
btn_group.click()

msg = by_xpath('//*[@id="main"]/footer/div[1]/div[2]/div/div[2]')
sleep(1)
for e in range(0,20):
	msg.send_keys('oi')
	sleep(1)
	btn_enviar = by_xpath('//*[@id="main"]/footer/div[1]/div[3]/button')
	btn_enviar.click()

