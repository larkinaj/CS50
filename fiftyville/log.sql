-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Used to check the tables in the db
.tables

--Used to check the schema of crime_scene_reports
.schema crime_scene_reports

--Used to check the crime scene report for the duck theft incident
SELECT description FROM crime_scene_reports WHERE month = 7 AND day = 28 AND street = "Humphrey Street"

-- Used to check the schema of bakery_security_logs
.schema bakery_security_logs

-- Used to check all license plates that left 10 minutes after the theft
SELECT hour, minute, activity, license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND year = 2021 AND hour = 10 AND minute BETWEEN 15 AND 25;

-- Used to check the 
SELECT id, name, license_plate FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND year = 2021 AND hour = 10 AND minute BETWEEN 15 AND 25);


