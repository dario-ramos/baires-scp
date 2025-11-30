/*
 * scamper_http_warts.h
 *
 * $Id: scamper_http_warts.h,v 1.3 2025/11/17 01:13:00 mjl Exp $
 *
 * Copyright (C) 2023 The Regents of the University of California
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef __SCAMPER_HTTP_WARTS_H
#define __SCAMPER_HTTP_WARTS_H

int scamper_file_warts_http_write(const scamper_file_t *sf,
				  const scamper_http_t *http, void *p);

int scamper_file_warts_http_read(scamper_file_t *sf, const warts_hdr_t *hdr,
				 scamper_http_t **http_out);

#endif
