# IOT-AIR-QUALITY-MONITOR

COMPANY : CODTECH IT SOLUTIONS

NAME : GANDETI SRAVANTHI

INTERN ID : CT04DF2120

DOMAIN : INTERNET OF THINGS

DURATION : 4 WEEKS

MENTOR : NEELA SANTOSH

In today’s world, the quality of the air we breathe has become a crucial concern due to rising levels of pollution, urbanization, and industrial activity. Monitoring air quality in real time is not only important for environmental conservation but also for public health and well-being. This project focuses on developing a prototype of an air quality monitoring system that tracks key pollutants—specifically PM2.5 and CO2 levels—and displays the collected data on a cloud-based dashboard. What makes this project especially valuable is that it has been developed without the use of any physical hardware. Instead, the entire system has been simulated using freely available online tools such as Wokwi and ThingSpeak, making it accessible, scalable, and educational.

The primary goal of this project is to simulate the working of an air quality monitoring system by generating artificial sensor data that resembles real-world conditions. The microcontroller chosen for this task is the ESP32, a powerful yet cost-effective board known for its Wi-Fi capabilities. Using the Wokwi simulation platform, the ESP32 is programmed to produce random values within a reasonable range for PM2.5 (fine particulate matter) and CO2 (carbon dioxide) levels. These values are meant to mimic live readings that would be captured by physical sensors in an actual environment.

Once the data is generated, it is sent over the internet to ThingSpeak, a widely-used cloud IoT analytics platform. ThingSpeak receives the data at regular intervals—specifically every 15 seconds—and displays it on a real-time dashboard. Each pollutant is tracked on its own chart: one for PM2.5 and another for CO2. These charts allow users to observe live changes and also analyze historical trends. For example, if PM2.5 levels spike suddenly, it could indicate poor air circulation, increased dust, or pollution sources nearby. Similarly, rising CO2 levels may point to inadequate ventilation in enclosed spaces.

What makes this project stand out is the complete absence of physical components. There are no actual sensors, no breadboards, and no cables involved. Everything is done virtually, yet the result closely mirrors a functioning IoT system. This is made possible through smart simulation using Wokwi, which allows developers to write and test Arduino or ESP32 code in a browser-based environment. The ESP32 connects to the internet using a simulated Wi-Fi connection and transmits the data to ThingSpeak just as it would in a real-world deployment.

Another benefit of using ThingSpeak is its built-in support for data visualization. The platform not only shows current readings but also plots graphs over time, which can help identify trends and anomalies. With just a few clicks, users can customize the dashboard, set up alerts, or even integrate with MATLAB for advanced analysis. This makes the solution both flexible and powerful, capable of being expanded into a more comprehensive monitoring system in the future.

In conclusion, this air quality monitoring system successfully simulates the end-to-end flow of an IoT project—from data generation and transmission to cloud storage and visualization—without relying on any physical hardware. It demonstrates how real-time environmental monitoring can be implemented using modern tools, and serves as a great prototype for further development. This project is especially useful for students, hobbyists, and researchers who want to understand how IoT-based monitoring systems work, all while staying within a virtual and cost-free environment.

#OUTPUT

![Image](https://github.com/user-attachments/assets/3e99b7f2-c74e-494b-80dd-71e226cb6231)
