/*
 * http.h
 *
 *  Created on: Feb 23, 2019
 *      Author: melchi
 */

#define RESOURCE_FOUND "200"
#define SAME_VERSION "304"
#define PARTS_FOUND "226"
#define RESOURCE_NOT_FOUND "404"
#define BAD_REQUEST "400"

struct http_request{
	char *path, *version_id;
	short accept_parts;
};

struct http_response{
	char *version_id, *status_code, *body;
	int content_length;
};

//returns success or error code
int parse_request(char *request_data, struct http_request *request);

//returns success or error code
int generate_response(struct http_response *response, char *response_data);
