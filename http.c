#include "http.h"

typedef struct s_http_request
{
	unsigned char uri[HTTP_MAX_URI];
	unsigned char path[HTTP_MAX_PATH];
} HTTP_REQUEST, *PHTTP_REQUEST, *LPHTTP_REQUEST;

void http_init()
{
}

void http_cleanup()
{
}

void http_ssl_init()
{
}

void http_ssl_cleanup()
{
}

int http_request(struct *s_http_request, unsigned short len)
{
	return 0;
}
