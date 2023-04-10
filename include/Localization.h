#ifndef INCLUDE_LOCALIZATION_H__
#define INCLUDE_LOCALIZATION_H__

#define F_(string_name) (__pstr__##string_name)
#define FL_(list_name) (__pstr__L_##list_name)
#define FLI_(list_name, index) (FL_(list_name)[index])

#define MAKE_PSTR(string_name, string_literal) static const char __pstr__##string_name[] = string_literal;
#define MAKE_PSTR_LIST(list_name, ...) static const char * const __pstr__L_##list_name[]  = {__VA_ARGS__, nullptr};

// Language defintion, respect order in languages[] and translation lists
#define DTU_LOCALE_EN 0
#define DTU_LOCALE_DE 1
#define DTU_LOCALE_FR 2

MAKE_PSTR(dtu_opendtu, "OpenDTU!");

MAKE_PSTR_LIST(dtu_offline, "offline", "offline", "hors ligne");
MAKE_PSTR_LIST(dtu_actual_power_w, "%3.0f W", "%3.0f W", "%3.0f W");
MAKE_PSTR_LIST(dtu_actual_power_kw, "%2.1f kW", "%2.1f kW", "%2.1f kW");
MAKE_PSTR_LIST(dtu_yield_today_wh, "Today: %4.0f Wh", "Heute: %4.0f Wh", "Aujourd'hui: %4.0f Wh");
MAKE_PSTR_LIST(dtu_yield_total_kwh, "Total: %.1f kWh", "Insgesamt: %.1f kWh", "Au total: %.1f kWh");

#endif // INCLUDE_LOCALIZATION_H__
