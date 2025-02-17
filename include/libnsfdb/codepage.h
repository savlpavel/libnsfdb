/*
 * Codepage definitions for libnsfdb
 *
 * Copyright (C) 2010-2023, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBNSFDB_CODEPAGE_H )
#define _LIBNSFDB_CODEPAGE_H

#include <libnsfdb/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBNSFDB_CODEPAGES
{
	LIBNSFDB_CODEPAGE_ASCII				= 20127,

	LIBNSFDB_CODEPAGE_ISO_8859_1			= 28591,
	LIBNSFDB_CODEPAGE_ISO_8859_2			= 28592,
	LIBNSFDB_CODEPAGE_ISO_8859_3			= 28593,
	LIBNSFDB_CODEPAGE_ISO_8859_4			= 28594,
	LIBNSFDB_CODEPAGE_ISO_8859_5			= 28595,
	LIBNSFDB_CODEPAGE_ISO_8859_6			= 28596,
	LIBNSFDB_CODEPAGE_ISO_8859_7			= 28597,
	LIBNSFDB_CODEPAGE_ISO_8859_8			= 28598,
	LIBNSFDB_CODEPAGE_ISO_8859_9			= 28599,
	LIBNSFDB_CODEPAGE_ISO_8859_10			= 28600,
	LIBNSFDB_CODEPAGE_ISO_8859_11			= 28601,
	LIBNSFDB_CODEPAGE_ISO_8859_13			= 28603,
	LIBNSFDB_CODEPAGE_ISO_8859_14			= 28604,
	LIBNSFDB_CODEPAGE_ISO_8859_15			= 28605,
	LIBNSFDB_CODEPAGE_ISO_8859_16			= 28606,

	LIBNSFDB_CODEPAGE_KOI8_R			= 20866,
	LIBNSFDB_CODEPAGE_KOI8_U			= 21866,

	LIBNSFDB_CODEPAGE_WINDOWS_874			= 874,
	LIBNSFDB_CODEPAGE_WINDOWS_932			= 932,
	LIBNSFDB_CODEPAGE_WINDOWS_936			= 936,
	LIBNSFDB_CODEPAGE_WINDOWS_949			= 949,
	LIBNSFDB_CODEPAGE_WINDOWS_950			= 950,
	LIBNSFDB_CODEPAGE_WINDOWS_1250			= 1250,
	LIBNSFDB_CODEPAGE_WINDOWS_1251			= 1251,
	LIBNSFDB_CODEPAGE_WINDOWS_1252			= 1252,
	LIBNSFDB_CODEPAGE_WINDOWS_1253			= 1253,
	LIBNSFDB_CODEPAGE_WINDOWS_1254			= 1254,
	LIBNSFDB_CODEPAGE_WINDOWS_1255			= 1255,
	LIBNSFDB_CODEPAGE_WINDOWS_1256			= 1256,
	LIBNSFDB_CODEPAGE_WINDOWS_1257			= 1257,
	LIBNSFDB_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBNSFDB_CODEPAGE_US_ASCII			LIBNSFDB_CODEPAGE_ASCII

#define LIBNSFDB_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBNSFDB_CODEPAGE_ISO_8859_1
#define LIBNSFDB_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBNSFDB_CODEPAGE_ISO_8859_2
#define LIBNSFDB_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBNSFDB_CODEPAGE_ISO_8859_3
#define LIBNSFDB_CODEPAGE_ISO_NORTH_EUROPEAN		LIBNSFDB_CODEPAGE_ISO_8859_4
#define LIBNSFDB_CODEPAGE_ISO_CYRILLIC			LIBNSFDB_CODEPAGE_ISO_8859_5
#define LIBNSFDB_CODEPAGE_ISO_ARABIC			LIBNSFDB_CODEPAGE_ISO_8859_6
#define LIBNSFDB_CODEPAGE_ISO_GREEK			LIBNSFDB_CODEPAGE_ISO_8859_7
#define LIBNSFDB_CODEPAGE_ISO_HEBREW			LIBNSFDB_CODEPAGE_ISO_8859_8
#define LIBNSFDB_CODEPAGE_ISO_TURKISH			LIBNSFDB_CODEPAGE_ISO_8859_9
#define LIBNSFDB_CODEPAGE_ISO_NORDIC			LIBNSFDB_CODEPAGE_ISO_8859_10
#define LIBNSFDB_CODEPAGE_ISO_THAI			LIBNSFDB_CODEPAGE_ISO_8859_11
#define LIBNSFDB_CODEPAGE_ISO_BALTIC			LIBNSFDB_CODEPAGE_ISO_8859_13
#define LIBNSFDB_CODEPAGE_ISO_CELTIC			LIBNSFDB_CODEPAGE_ISO_8859_14

#define LIBNSFDB_CODEPAGE_ISO_LATIN_1			LIBNSFDB_CODEPAGE_ISO_8859_1
#define LIBNSFDB_CODEPAGE_ISO_LATIN_2			LIBNSFDB_CODEPAGE_ISO_8859_2
#define LIBNSFDB_CODEPAGE_ISO_LATIN_3			LIBNSFDB_CODEPAGE_ISO_8859_3
#define LIBNSFDB_CODEPAGE_ISO_LATIN_4			LIBNSFDB_CODEPAGE_ISO_8859_4
#define LIBNSFDB_CODEPAGE_ISO_LATIN_5			LIBNSFDB_CODEPAGE_ISO_8859_9
#define LIBNSFDB_CODEPAGE_ISO_LATIN_6			LIBNSFDB_CODEPAGE_ISO_8859_10
#define LIBNSFDB_CODEPAGE_ISO_LATIN_7			LIBNSFDB_CODEPAGE_ISO_8859_13
#define LIBNSFDB_CODEPAGE_ISO_LATIN_8			LIBNSFDB_CODEPAGE_ISO_8859_14
#define LIBNSFDB_CODEPAGE_ISO_LATIN_9			LIBNSFDB_CODEPAGE_ISO_8859_15
#define LIBNSFDB_CODEPAGE_ISO_LATIN_10			LIBNSFDB_CODEPAGE_ISO_8859_16

#define LIBNSFDB_CODEPAGE_KOI8_RUSSIAN			LIBNSFDB_CODEPAGE_KOI8_R
#define LIBNSFDB_CODEPAGE_KOI8_UKRAINIAN		LIBNSFDB_CODEPAGE_KOI8_U

#define LIBNSFDB_CODEPAGE_WINDOWS_THAI			LIBNSFDB_CODEPAGE_WINDOWS_874
#define LIBNSFDB_CODEPAGE_WINDOWS_JAPANESE		LIBNSFDB_CODEPAGE_WINDOWS_932
#define LIBNSFDB_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBNSFDB_CODEPAGE_WINDOWS_936
#define LIBNSFDB_CODEPAGE_WINDOWS_KOREAN		LIBNSFDB_CODEPAGE_WINDOWS_949
#define LIBNSFDB_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBNSFDB_CODEPAGE_WINDOWS_950
#define LIBNSFDB_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBNSFDB_CODEPAGE_WINDOWS_1250
#define LIBNSFDB_CODEPAGE_WINDOWS_CYRILLIC		LIBNSFDB_CODEPAGE_WINDOWS_1251
#define LIBNSFDB_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBNSFDB_CODEPAGE_WINDOWS_1252
#define LIBNSFDB_CODEPAGE_WINDOWS_GREEK			LIBNSFDB_CODEPAGE_WINDOWS_1253
#define LIBNSFDB_CODEPAGE_WINDOWS_TURKISH		LIBNSFDB_CODEPAGE_WINDOWS_1254
#define LIBNSFDB_CODEPAGE_WINDOWS_HEBREW		LIBNSFDB_CODEPAGE_WINDOWS_1255
#define LIBNSFDB_CODEPAGE_WINDOWS_ARABIC		LIBNSFDB_CODEPAGE_WINDOWS_1256
#define LIBNSFDB_CODEPAGE_WINDOWS_BALTIC		LIBNSFDB_CODEPAGE_WINDOWS_1257
#define LIBNSFDB_CODEPAGE_WINDOWS_VIETNAMESE		LIBNSFDB_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBNSFDB_CODEPAGE_H ) */

