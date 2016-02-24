it)LHALF(tmp.ul[H]);
	v[3] = (digit)HHALF(tmp.ul[L]);
	v[4] = (digit)LHALF(tmp.ul[L]);
	for (n = 4; v[1] == 0; v++) {
		if (--n == 1) {
			u_int rbj;	/* r*B+u[j] (not root boy jim) */
			digit q1, q2, q3, q4;

			/*
			 * Change of plan, per exercise 16.
			 *	r = 0;
			 *	for j = 1..4:
			 *		q[j] = floor((r*B + u[j]) / v),
			 *		r = (r*B + u[j]) % v;
			 * We unroll this completely here.
			 */
			t = v[2];	/* nonzero, by definition */
			q1 = (digit)(u[1] / t);
			rbj = COMBINE(u[1] % t, u[2]);
			q2 = (digit)(rbj / t);
			rbj = COMBINE(rbj % t, u[3]);
			q3 = (digit)(rbj / t);
			rbj = COMBINE(rbj % t, u[4]);
			q4 = (digit)(rbj / t);
			if (arq)
				*arq = rbj % t;
			tmp.ul[H] = COMBINE(q1, q2);
			tmp.ul[L] = COMBINE(q3, q4);
			return (tmp.q);
		}
	}

	/*
	 * By adjusting q once we determine m, we can guarantee that
	 * there is a complete four-digit quotient at &qspace[1] when
	 * we finally stop.
	 */
	for (m = 4 - n; u[1] == 0; u++)
		m--;
	for (i = 4 - m; --i >= 0;)
		q[i] = 0;
	q += 4 - m;

	/*
	 * Here we run Program D, translated from 