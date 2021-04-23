package edu.ufl.cise.cs1.controllers;
import game.controllers.AttackerController;
import game.models.*;
import java.awt.*;
import java.util.List;
import java.util.ArrayList;

public final class StudentAttackerController implements AttackerController
{
	public void init(Game game) { }

	public void shutdown(Game game) { }

	public int update(Game game,long timeDue)
	{
		int action;
		int distanceFromPP = Integer.MAX_VALUE;
		Node closestPP = null;
		int distanceFromDefender = Integer.MAX_VALUE;
		Node closestDefender = null;


		// find closest defender
		for (Defender d : game.getDefenders()) {
			if (d.getLairTime() <= 0) {
				int temp = game.getAttacker().getLocation().getPathDistance(d.getLocation());

				if (temp < distanceFromDefender) { // replace temp if shorter distance found
					closestDefender = d.getLocation();
					distanceFromDefender = temp;
				}

				// is ghost vulnerable?

				// ghost vulnerable? yes -> chase & eat
				if (d.isVulnerable()) {
					if (d.getVulnerableTime() < 3) {
						break;
					}
					Node n = d.getLocation();
					action = game.getAttacker().getNextDir(n, true);
					return action;
				}
				// ghost vulnerable? no -> check power pill
				else {
					if (distanceFromDefender <= 1) {
						action = game.getAttacker().getNextDir(closestDefender, false);
						return action;
					}
				}
			}
		}

					// power pill avail? yes -> check ghost near
		for (Node pp : game.getPowerPillList()) {

			// find closest power pill
			for (Node findClosestPP : game.getPowerPillList()) {
				int temp = game.getAttacker().getLocation().getPathDistance(findClosestPP);

				if (temp < distanceFromPP) {
					closestPP = findClosestPP;
					distanceFromPP = temp;
				}
			}

						// ghost near? yes, eat power pill
			if (distanceFromDefender <= 5) {
				action = game.getAttacker().getNextDir(closestPP, true);
				return action;
			}
						// ghost near? no, get near power pill
			else {
				if (distanceFromPP <= 2) {
					action = game.getAttacker().getReverse();
					return action;
				}
				else {
					action = game.getAttacker().getNextDir(closestPP, true);
					return action;
				}
			}
		}

			// find closest pill
			int distanceFromP = Integer.MAX_VALUE;
			Node closestP = null;

			for (Node p : game.getPillList()) {
				int temp = game.getAttacker().getLocation().getPathDistance(p);

				if (temp < distanceFromP) {
					closestP = p;
					distanceFromP = temp;
				}
			}
					// power pill avail? no, eat normal pill

			action = game.getAttacker().getNextDir(closestP, true);
			return action;
		}
}