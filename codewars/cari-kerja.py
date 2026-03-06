def job_matching(candidate, job):
    if candidate["min_salary"] == None or job["max_salary"] == None:
        raise Exception
    wiggle = candidate["min_salary"] * 0.9
    return wiggle <= job["max_salary"]
