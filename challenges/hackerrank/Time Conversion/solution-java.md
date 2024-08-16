# Time Conversion
Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

```
    public static String timeConversion(String s) {
        String hourText = s.substring(0,2);
        String timer = s.substring(8, 10);
        Integer hour = Integer.parseInt(hourText);
        
        if(hour == 12) {
            if (timer.equals("AM")) {
                hour -= 12;
            }
        } else {
            if (timer.equals("PM")) {
                hour += 12;
            }
        }
        
        if (hour < 10) {
            hourText = "0" + hour;
        } else {
            hourText = hour.toString();
        }
        
        String militaryFormatted = hourText + s.substring(2,8);
        System.out.println(militaryFormatted);
        return militaryFormatted;
    }
```