#include <stdio.h>
#include <GeoIP.h>
#include <GeoIPCity.h>

int main(int argc, char *argv[])
{
	GeoIP * gi;
	GeoIPRecord * gr;
	gi = GeoIP_open("/usr/share/GeoIP/GeoIP.dat", GEOIP_STANDARD);
	gr = GeoIP_record_by_addr(gi, argv[1]);
	printf("country: %s\n",GeoIP_country_name_by_addr(gi, argv[1]));
	if(gr!=NULL)
		printf("city: %s\n", gr->city);
	return 0;
}
